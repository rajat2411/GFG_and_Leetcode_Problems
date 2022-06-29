class Solution {
public:
    void solve (int i, int j, int n, int m, vector<vector<int>>& grid1, vector<vector<int>>& grid2, bool &ans)
    {
        if (i<0 || j<0 || i>=n || j>=m)
            return ;
        
        if (grid1[i][j]==0 && grid2[i][j]==1)
            ans = false;
        
        
        if (grid2[i][j]==0)
            return;
        
        grid2[i][j]=0;
        
        solve (i+1,j,n,m,grid1,grid2, ans);
        solve (i-1,j,n,m,grid1,grid2, ans);
        solve (i,j+1,n,m,grid1,grid2, ans);
        solve (i,j-1,n,m,grid1,grid2, ans);

    }
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
        int m = grid1[0].size(), n = grid1.size(), subislands = 0;
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (grid2[i][j]==1)
                {
                    bool ans = true;
                    solve (i, j ,n , m, grid1, grid2, ans);
                    
                    if (ans)
                        subislands++;
                }
            }
        }
        
        return subislands;
        
    }
};