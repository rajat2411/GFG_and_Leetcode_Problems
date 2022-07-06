class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        if(maze.empty() ) return 0;
        int n=maze.size();
        int m=maze[0].size();
        
        queue<pair<int,int>>q;
        q.push({entrance[0],entrance[1]});
        int moves=0;
        
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        maze[entrance[0]][entrance[1]]='+';
        while(!q.empty()){
            int k=q.size();
            moves++;
            while(k--){
                pair<int,int>p=q.front();
                q.pop();
                int x=p.first;
                int y=p.second;
                for(int i=0;i<4;i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    if(nx<0 || nx>=n || ny>=m || ny<0 || maze[nx][ny]=='+') continue;
                    
                    if(nx==0 || ny==0 || nx==n-1 || ny==m-1){
                        return moves;
                    }
                    
                    
                    maze[nx][ny]='+';
                    q.push({nx,ny});
                    
                }
            } 
        }
        return -1;
        
        
    }
};