class Solution {
public:
    int f(int i,int j,vector<vector<int>>&dp){
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int left=f(i-1,j,dp);
        int up=f(i,j-1,dp);
        return dp[i][j]=left+up;
    }
    
    int uniquePaths(int m, int n) {
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // tabulation 
        int dp[m][n];
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[0][0]=1;
              else  { 
                int left=0;
                  if(i>0)left=dp[i-1][j];
                int up=0;
                  if(j>0) up=dp[i][j-1];
                dp[i][j]=left+up;}
            }
        }
        
        
        // return f(m-1,n-1,dp);
        return dp[m-1][n-1];
    }
};