class Solution {
public:
    
    bool solve(vector<int>&nums,int target,int index,vector<vector<int>>&dp){
        if(target==0){
            return true;
        }
        if(index==0){
            return(nums[0]==target);
        }
        
        // all paths
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        
        bool notTake=solve(nums,target,index-1,dp);
        
        bool take=false;
        if(nums[index]<=target){
            take=solve(nums,target-nums[index],index-1,dp);
        }
        
        return dp[index][target]=take|notTake;
    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
         vector<vector<int>>dp(nums.size(),vector<int>(s/2+1,-1));

        
        if(s%2!=0){
            return false;
        }
        else
        {
          return solve(nums,s/2,nums.size()-1,dp);  
        }
        
    }
};