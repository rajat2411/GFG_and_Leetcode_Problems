class Solution {
public:
//     int solve(int ind,vector<int> &nums,int K,vector<int> dp)
//     {
//         if(ind==0){
//             return nums[0];
//         }
//         if(ind<0){
//             return -1e9;
//         }
//         if(dp[ind]!=-1){
//             return dp[ind];
//         }
//         int maxi=-1e9;
        
//         for(int i=1;i<=K;i++){
//             maxi=max(maxi,nums[ind]+solve(ind-i,nums,K,dp));
//         }
//         return dp[ind]=maxi;
//     }
    
//     int maxResult(vector<int>& nums, int k) {
//         // vector<int> dp(nums.size()+1,-1);
//         // return solve(nums.size()-1,nums,k,dp);
//         int n=nums.size();
//         int dp[n];
        
        
//         // tabulation  
//         dp[0]=nums[0];
        
//         for(int i=1;i<nums.size();i++){
//             int maxi=-1e9;
//             for(int steps=1;steps<=k;steps++){
//                 if(i-steps>=0){
//                 maxi=max(maxi,nums[i]+dp[i-steps]);
//                 }
//             }
//             dp[i]=maxi;
//         }
//         return dp[n-1];
//     }
    
    // ==>>> tabulation gives TLE<<<<======
    int maxResult(vector<int>& nums, int k) {
      int n=nums.size();
      vector<int>dp(n,0);
      
      priority_queue<pair<int,int>>pq;
      
      for(int i=n-1; i>=0; i--){
          while(pq.size()&&pq.top().second>i+k)
              pq.pop();
          
          dp[i]=dp[i]+nums[i]+(pq.size()?pq.top().first:0);
          pq.push({dp[i],i});
      }
      return dp[0];
  }
};