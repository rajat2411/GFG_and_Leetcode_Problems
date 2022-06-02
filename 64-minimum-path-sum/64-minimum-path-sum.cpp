class Solution {
public:
    
    int solve(vector<vector<int>>& grid,int m, int n,vector<vector<int>>&dp){
        if(m==0 && n==0){
            return grid[0][0];
        }
        if(m<0 || n<0){
            return 1e9;  // because when we get the minimum it will not considered 
            
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int up=grid[m][n]+ solve(grid,m-1,n,dp);
        int left=grid[m][n]+ solve(grid,m,n-1,dp);
        
        return dp[m][n]=min(up,left);
        
        
    }
//     int minPathSum(vector<vector<int>>& grid) {
//         int m=grid.size();
//         int n=grid[0].size();
//         // vector<vector<int>>dp(m,vector<int>(n,-1));
//         // return solve(grid,m-1,n-1,dp);
//         // lets to tabulation 
//         int dp[m][n];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(i==0 && j==0){
//                     dp[i][j]=grid[i][j];
//                 }
//                 else{
//                     int left=grid[i][j];
//                     int up=grid[i][j];
//                     if(i>0){
//                         up+=dp[i-1][j];
//                     }
//                     else{
//                         up+=1e9;
//                     }
//                     if(j>0){
//                         left+=dp[i][j-1];
//                     }
//                     else{

//                     left+=1e9;
//                     }
//                     dp[i][j]=min(up,left);
//                 }
//             }
//         }
//         return dp[m-1][n-1];
        
        
        
//     }
    
//     =======>>>>>>>>>>>space optimisation<<<<<<<<<=================
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return solve(grid,m-1,n-1,dp);
        // lets to tabulation 
        // int dp[m][n];
        vector<int>prev(n,0);
        for(int i=0;i<m;i++){
            vector<int>curr(n,0);

            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                    curr[j]=grid[i][j];
                }
                else{
                    int left=grid[i][j];
                    int up=grid[i][j];
                    if(i>0){
                        up+=prev[j];
                    }
                    else{
                        up+=1e9;
                    }
                    if(j>0){
                        left+=curr[j-1];
                    }
                    else{

                    left+=1e9;
                    }
                    curr[j]=min(up,left);
                }
            }
            prev=curr;
        }
        return prev[n-1];
        
        
        
    }
    
    
    
    
};