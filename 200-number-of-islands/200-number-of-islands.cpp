class Solution {
public:
    
    
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        if(grid[i][j]=='1' && !vis[i][j]){
            vis[i][j]=1;
            if(j<m-1) dfs(i,j+1,vis,grid);
            if(i<n-1) dfs(i+1,j,vis,grid);
            if(i>0) dfs(i-1,j,vis,grid);
            if(j>0) dfs(i,j-1,vis,grid);
        }
        if(grid[i][j]=='0') return;
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        vector<vector<int>>vis(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                 dfs(i,j,vis,grid);
                    c++;
                }
            }
        }
        return c;
    }
};