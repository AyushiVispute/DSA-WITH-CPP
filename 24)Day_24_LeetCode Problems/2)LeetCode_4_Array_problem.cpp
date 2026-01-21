#include <climits>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans= merge(nums1,nums2);
            if(ans.size()%2==0){
                double ans2 = (ans[ans.size()/2] + ans[ans.size()/2 - 1]) / 2.0;

                return ans2;
            }
            else{
                double ans2=(ans[ans.size()/2]);
                return ans2;
            }
    }   
            vector<int> merge(vector<int> nums1,vector<int>nums2){
    
        
            vector<int> ans(nums1.size() + nums2.size());


        int p1=0;
        int p2=0;
        int p3=0;

        while(p1<nums1.size() || p2<nums2.size()){

            int val1 = (p1 < nums1.size()) ? nums1[p1] : INT_MAX;
            int val2 = (p2 < nums2.size()) ? nums2[p2] : INT_MAX;


           if(val1<val2){
            ans[p3]=val1;
            p1++;
           } else{
            ans[p3]=val2;
            p2++;
           }
            p3++;
            }
            return ans;
        }
        
        
    
};