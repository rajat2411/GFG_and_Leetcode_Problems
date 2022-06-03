class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int dp[n][n];
        for(int i=0;i<n;i++){
            dp[n-1][i]=triangle[n-1][i];
        }
        
        for(int j=n-2;j>=0;j--){
            for(int k=j;k>=0;k--){
                int d=triangle[j][k]+dp[j+1][k];
                int dg=triangle[j][k]+dp[j+1][k+1];
                dp[j][k]=min(d,dg);
            }
        }
        return dp[0][0];
    }
};