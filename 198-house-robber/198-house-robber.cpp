class Solution {
public:
    
    int solve(vector<int>&nums ,vector<int> &dp, int index){
        if(index==0){
            return nums[index];
        }
       
        if(index<0){
            return 0;
        }
         if(dp[index]!=-1){
            return dp[index];
        }
        
        int left=nums[index]+solve(nums,dp,index-2);
        int right=0+solve(nums,dp,index-1);
       return  dp[index]=max(left,right);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,dp,nums.size()-1);
    }
};