class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // solving striver sde sheet
        int n=grid.size();
        int m=grid[0].size();
        // visited arry
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        
        int cntFresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else if(grid[i][j]==1) 
                    cntFresh++;
                    vis[i][j]=1;
            }
        }
        
        int time=0;
        int drow[]={0,0,-1,+1};
        int dcol[]={1,-1,0,0};
        int cnt=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            time=max(time,t);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && vis[nrow][ncol]==1 && grid[nrow][ncol]==1 ){
                    vis[nrow][ncol]=2;
                    q.push({{nrow,ncol},t+1});
                    cnt++;
                    
                }
            }
            
            
        }
        if(cnt==cntFresh){
            return time;
        }
        else{
            return -1;
        }
        
    }
};