class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // using bfs 
        if(grid.empty()) return 0;
        int n=grid.size();
        int m=grid[0].size();
        int tot=0,cnt=0,time=0;
        queue<pair<int,int>>rotten;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2){
                    rotten.push({i,j});
                }
            }
        }
        // till now i have rotten orange coordinates and total oranges 
        int dx[4]={0,0,-1,1};
        int dy[4]={1,-1,0,0};
        
        while(!rotten.empty()){
            int k=rotten.size();
            cnt+=k;
            while(k--){
                pair<int,int>p=rotten.front();
                rotten.pop();
                int x=p.first;
                int y=p.second;
                for(int i=0;i<4;i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    
                    if(nx<0 || ny<0 || nx>=n || ny>=m || grid[nx][ny]!=1){
                        continue;
                    }
                    grid[nx][ny]=2;
                    rotten.push({nx,ny});
                }
            }
            if(!rotten.empty()) time++;
            
        }
        return (tot==cnt)?time:-1;
    }
};