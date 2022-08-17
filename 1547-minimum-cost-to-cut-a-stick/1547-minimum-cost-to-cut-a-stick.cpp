class Solution {
    public:
        // int f(int i, int j, vector<int>&c, vector<vector<int>>&dp){
        //         if(i>j) return 0;
        //         if(dp[i][j]!=-1) return dp[i][j];
        //         long mini = INT_MAX;;
        //         for(int idx =i;idx<=j;idx++){
        //             long cost = c[j+1]-c[i-1] + f(i,idx-1,c,dp)  + f(idx+1,j,c,dp);
        //             mini = min(mini,cost);
        //         }
        //         return dp[i][j] = mini;
        //     }
            int minCost(int n, vector<int>& cuts) {
                int c = cuts.size();
                cuts.push_back(0);
                cuts.push_back(n);
                sort(cuts.begin(),cuts.end());
                vector<vector<int>>dp(c+2,vector<int>(c+2,0));
                // return f(1,c,cuts,dp);
                
                for(int i=c;i>=1;i--){
                    for(int j=1;j<=c;j++){
                        if(i>j)continue;
                        
                        int mini = 1e8;
                for(int idx =i;idx<=j;idx++){
                    int cost = cuts[j+1]-cuts[i-1] + dp[i][idx-1]  + dp[idx+1][j];
                    mini = min(mini,cost);
                }
                    dp[i][j] = mini;
                    }
                    
                }
                return dp[1][c];
                
            }
    
};