class Solution {
public:
    
    void flood_fill(vector<vector<int>>& grid,int i,int j,vector<pair<int,int>> &r){
        
//         invalid cell 
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()|| grid[i][j]==0){
            return ;
        }
        
        grid[i][j]=0;
        
        r.push_back({i,j});//pushing coordinates in cell
        
        flood_fill(grid,i+1,j,r);
        flood_fill(grid,i-1,j,r);
        flood_fill(grid,i,j+1,r);
        flood_fill(grid,i,j-1,r);
        
        return;
        
    }
    int shortestBridge(vector<vector<int>>& grid) {
        //use flood fill algo 
        int n=grid.size();
        int m=grid[0].size();
        vector<pair<int,int>> x; // to store coordinates pf 1st island 
        vector<pair<int,int>>y;  // to store coordinates of second island
        
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    count++;
                    if(count==1){
                        // if we are visiting first siland
                        flood_fill(grid,i,j,x);
                    }
                    else if(count==2){
                        flood_fill(grid,i,j,y);
                        
                    }
                }
            }
        }
        
        // check minimum distance 
        
        int min_dist=1e9;
        for(int i=0;i<x.size();i++){
            for(int j=0;j<y.size();j++){
                int dist=abs(x[i].first-y[j].first)+abs(x[i].second-y[j].second);
                
                if(dist<min_dist){
                    min_dist=dist;
                }
            }
        }
        return min_dist-1;
        
        
    }
};