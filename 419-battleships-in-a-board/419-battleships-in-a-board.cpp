class Solution {
public:
    
    void check(int i,int j,vector<vector<char>>& board,vector<vector<int>>& vis){
        int n=board.size();
        int m=board[0].size();
        
        
        if(j>=m || i>=n || j<0 || i<0 || vis[i][j] || board[i][j]=='.') return;
        
        vis[i][j]=1;
        check(i+1,j,board,vis);
        check(i,j+1,board,vis);
        check(i,j-1,board,vis);
        check(i-1,j,board,vis);

    
    }
    
    int countBattleships(vector<vector<char>>& board) {
        vector<vector<int>>vis(board.size(),vector<int>(board[0].size(),0));
        int count=0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(!vis[i][j] && board[i][j]=='X'){
                   check(i,j,board,vis);
                    count++; 
                }
                
            }
        }
        return count;
    }
};