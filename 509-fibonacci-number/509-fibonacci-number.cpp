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
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};