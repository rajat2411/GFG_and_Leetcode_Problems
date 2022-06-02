class Solution {
public:
    
    // memoization
//     int uni(int m,int n,vector<vector<int>>&dp){
//         if(m==0 && n==0){
//             return 1;
//         }
        
//         if(m<0 || n<0){
//             return 0;
//         }
//         if(dp[m][n]!=-1){
//             return dp[m][n];
//         }
        
//         // accumulate
//         int left=uni(m,n-1,dp);
//         int up=uni(m-1,n,dp);
//         return dp[m][n]=left+up;
//     }
    
    // int uniquePaths(int m, int n) {
    //     // declareing dp of m*n 
    //     vector<vector<int>>dp(m,vector<int>(n,-1));
    //     return uni(m-1,n-1,dp);
    // }
    
    
    
//     =======>>>>>> tabulation<<<<<<<<============
//      int uniquePaths(int m, int n) {
//         // declareing dp of m*n 
//         // vector<vector<int>>dp(m,vector<int>(n,-1));
//          int dp[m][n];
//         // return uni(m-1,n-1,dp);
         
//          for(int i=0;i<m;i++){
//              for(int j=0;j<n;j++){
//                  if(i==0 && j==0){
//                      dp[i][j]=1;
//                  }
//                  else{
//                      int up=0;
//                      int left=0;
//                      if(j>0){
//                          left=dp[i][j-1];
//                      }
//                      if(i>0){
//                          up=dp[i-1][j];
//                      }
//                      dp[i][j]=left+up;
//                  }
//              }
//          }
//          return dp[m-1][n-1];
         
//     }
    
    
    
    
//     =================>>>>>space optimise<<<<<<<<<<<<<<==========
    int uniquePaths(int m, int n) {
        // declareing dp of m*n 
        // vector<vector<int>>dp(m,vector<int>(n,-1));
         // int dp[m][n];
        // return uni(m-1,n-1,dp);
        vector<int>prev(n,0);
         
         for(int i=0;i<m;i++){
             vector<int>curr(n,0);
             for(int j=0;j<n;j++){
                 if(i==0 && j==0){
                     curr[j]=1;
                 }
                 else{
                     int up=0;
                     int left=0;
                     if(j>0){
                         left=curr[j-1];
                     }
                     if(i>0){
                         up=prev[j];
                     }
                     curr[j]=left+up;
                 }
             }
             prev=curr;
         }
         return prev[n-1];
         
    }
    
    
    
    
    
};