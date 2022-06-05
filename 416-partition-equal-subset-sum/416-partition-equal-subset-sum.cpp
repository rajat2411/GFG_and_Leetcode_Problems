class Solution {
public:
    
//     bool solve(vector<int>&nums,int target,int index,vector<vector<int>>&dp){
//         if(target==0){
//             return true;
//         }
//         if(index==0){
//             return(nums[0]==target);
//         }
        
//         // all paths
//         if(dp[index][target]!=-1){
//             return dp[index][target];
//         }
        
//         bool notTake=solve(nums,target,index-1,dp);
        
//         bool take=false;
//         if(nums[index]<=target){
//             take=solve(nums,target-nums[index],index-1,dp);
//         }
        
//         return dp[index][target]=take|notTake;
//     }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
                int k=s/2;

         // vector<vector<bool>>dp(nums.size(),vector<bool>(k+1,0));
        // bool dp[nums.size()][k+1];
        vector<bool>prev(k+1,0);
        vector<bool>curr(k+1,0);
        

        
        if(s%2!=0){
            return false;
        }
        // else
        // {
        //   return solve(nums,s/2,nums.size()-1,dp);  
        // }
        
        
        // 
        prev[0]=curr[0]=true;
        
      if(nums[0]<=k){
          prev[nums[0]]=true;
      }
        for(int index=1;index<nums.size();index++){
            for(int target=1;target<=k;target++){
                bool notTake=prev[target];
        
                bool take=false;
                if(nums[index]<=target){
                    take=prev[target-nums[index]];
                }
                
                curr[target]=take|notTake;
            }
            prev=curr;
        }
        
        return prev[k];
            
        
        
    }
};