class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid,int m ,int n,vector<vector<int>>& dp){
        
        if(m>=0 && n>=0 && obstacleGrid[m][n]==1){
            return 0;
        }
        if(m==0 && n==0){
            return 1;
        }
        if(m<0 || n<0){
            return 0;
        }
        
        if(dp[m][n]!=-1){
            return dp[m][n]; 
        }
        
        int left=solve(obstacleGrid,m,n-1,dp);
        int up=solve(obstacleGrid,m-1,n,dp);
        return dp[m][n]=left+up;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(obstacleGrid,m-1,n-1,dp);
        
    }
};