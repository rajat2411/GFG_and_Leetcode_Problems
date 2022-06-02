class Solution {
public:
    int uni(int m,int n,vector<vector<int>>&dp){
        if(m==0 && n==0){
            return 1;
        }
        
        if(m<0 || n<0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        
        // accumulate
        int left=uni(m,n-1,dp);
        int up=uni(m-1,n,dp);
        return dp[m][n]=left+up;
    }
    
    int uniquePaths(int m, int n) {
        // declareing dp of m*n 
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return uni(m-1,n-1,dp);
    }
};