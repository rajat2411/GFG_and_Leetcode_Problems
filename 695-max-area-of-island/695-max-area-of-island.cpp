class Solution {
public:
    void check(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid,int &temp){
        int n=grid.size();
        int m=grid[0].size();
        if(j<0 || i<0 || j>=m || i>=n || vis[i][j]==1 || grid[i][j]==0) return ;
        
        vis[i][j]=1;
        if(grid[i][j]==1){
            temp++;
        }
        check(i+1,j,vis,grid,temp);
        check(i,j+1,vis,grid,temp);
        check(i,j-1,vis,grid,temp);
        check(i-1,j,vis,grid,temp);

    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        int temp=0;
         int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]  && grid[i][j]==1){
                    check(i,j,vis,grid,temp);
                    area=max(area,temp);
                    temp=0;
                    
                    
                }
            }
        }
        return area;
    }
};