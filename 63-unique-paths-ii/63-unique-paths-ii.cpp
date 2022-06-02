class Solution {
public:
    
   /* int solve(vector<vector<int>>& obstacleGrid,int m ,int n,vector<vector<int>>& dp){
        
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
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return solve(obstacleGrid,m-1,n-1,dp);
        
        // tabulation 
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //base case
                if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;
                }
               else if(i==0 && j==0){
                    dp[i][j]=1;
                }
                
                else{
                    int up=0;
                    int left=0;
                    if(i>0){
                         up=dp[i-1][j];
                    }
                    if(j>0){
                         left=dp[i][j-1];
                    }
                    dp[i][j]=(left+up);
                }
            }
        }
        return dp[m-1][n-1];
        
    }
    */
    
    
    //==========>>>>>>>>Space Optimisaton<<<<<<<<<<<<<<<<<===================
     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return solve(obstacleGrid,m-1,n-1,dp);
        
        // tabulation 
        // int dp[m][n];
         vector<int>prev(n,0);
        for(int i=0;i<m;i++){
            vector<int>curr(n,0);
            for(int j=0;j<n;j++){
                //base case
                if(obstacleGrid[i][j]==1){
                    curr[j]=0;
                }
               else if(i==0 && j==0){
                    curr[j]=1;
                }
                
                else{
                    int up=0;
                    int left=0;
                    if(i>0){
                         up=prev[j];
                    }
                    if(j>0){
                         left=curr[j-1];
                    }
                    curr[j]=(left+up);
                }
            }
            prev=curr;
        }
        return prev[n-1];
        
    }
    
    
};