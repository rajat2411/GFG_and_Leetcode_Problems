class Solution {
public:
    bool valid(vector<vector<char>>&board,int i,int j)
    {
        if(  i>=0 and j>=0 and i<board.size() and j<board[0].size() and board[i][j]=='O')
            return 1;
        else
            return 0;
    }
    
    void dfs(vector<vector<char>>&board,int i,int j)
    {
        board[i][j]='1';
        if(valid(board,i+1,j))
            dfs(board,i+1,j);
        if(valid(board,i-1,j))
            dfs(board,i-1,j);
        if(valid(board,i,j+1))
            dfs(board,i,j+1);
        if(valid(board,i,j-1))
            dfs(board,i,j-1);
    }
    void solve(vector<vector<char>>& board) {
        //boundary 0's and unse connected saare 0's kisi kaam ke nhi hai
        //toh inhe pehle temporary '1' mark kr dunga
        //uske baad jitne 0's bche means unhe hm convert kr skte h
        //unhe hm 'X' kr denge
        //ab jitne 1's rehgye means vo pehle '0' hi theh unhe wapis 'O' krdoo
        
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0||i==n-1||j==0||j==m-1)
                {
                    if(board[i][j]=='O')
                    {
                        dfs(board,i,j);
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='1')
                    board[i][j]='O';
            }
        }
        
    }
};