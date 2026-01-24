class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range=nums.size();

        int actualSum=(range*(range+1))/2;
        int currentSum=0;

        for(int i=0;i<nums.size();i++){
            currentSum=currentSum+nums[i];
        }
        int ans=actualSum-currentSum;
        return ans;
        

        
    }
};
