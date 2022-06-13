class Solution {
public:
    
    /* ======>>>>tabulation<<<<<<<========
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
};*/
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int>prev(n);
        for(int i=0;i<n;i++){
            prev[i]=triangle[n-1][i];
        }
        
        for(int j=n-2;j>=0;j--){
            vector<int>curr(n);
            for(int k=j;k>=0;k--){
                int d=triangle[j][k]+prev[k];
                int dg=triangle[j][k]+prev[k+1];
                curr[k]=min(d,dg);
            }
            prev=curr;
        }
        return prev[0];
    }
};




