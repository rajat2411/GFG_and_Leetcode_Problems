class Solution {
public:
    
    bool sol(int i,vector<int>&nums , vector<int> &dp){
        if(dp[i]!=-1){
            return dp[i];
        }
        
        if(dp[i]==0){
            return false;
        }
        if(i==nums.size()-1){
            return true;
        }
        
        for(int j=1;j<=nums[i];j++){
            if(sol(i+j,nums,dp)){
              return  dp[i+j]=true;
            }
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
       vector<int>dp(nums.size()+1,-1);
        return sol(0,nums,dp);
    }
};