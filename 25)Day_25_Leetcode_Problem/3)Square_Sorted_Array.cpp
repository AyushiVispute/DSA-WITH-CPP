class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int st=0;
        int end=nums.size()-1;
        int ptr=ans.size()-1;

        while(st<=end){
           int ss=nums[st]*nums[st];
           int es=nums[end]*nums[end];

           if(ss>es){
            ans[ptr]=ss;
            st++;
          }else{
            ans[ptr]=es;
            end--;
          }
          ptr--;
            

        }return ans;

        
    }
};