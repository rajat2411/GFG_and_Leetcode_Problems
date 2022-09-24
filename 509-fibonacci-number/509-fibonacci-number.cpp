class Solution {
public:
    int solve(int index,vector<int> &dp){
        if(index==0){
            return 0;
        }
        if(index==1){
            return 1;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        
        int first=solve(index-1,dp);
        int second=solve(index-2,dp);
        return dp[index]=first+second;
    }
    int fib(int n) {
        // vector<int>dp(n+1,-1);
        // return solve(n,dp);
        int dp[n+2];
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
            
        }
        
        return dp[n];
        
        
    }
};