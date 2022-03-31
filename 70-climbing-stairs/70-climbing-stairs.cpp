class Solution {
public:
    int fib(vector<int>&dp,int n){
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=fib(dp,n-1)+fib(dp,n-2);
    }
    
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
         if(n==1){
            return 1;
        }
        fib(dp,n);
        return dp[n];
    }
};