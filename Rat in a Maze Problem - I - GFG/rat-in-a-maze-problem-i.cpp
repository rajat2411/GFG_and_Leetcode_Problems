// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void dfs(int x,int y,int n,vector<vector<int>> &m,string temp,vector<string> &ans,vector<vector<int>>&vis){
        if(x<0 || y<0 || x>=n || y>=n || vis[x][y]==1 || m[x][y]==0){
            return ;
        }
        if(x==n-1 && y==n-1){
            ans.push_back(temp);
            return ;
        }
        vis[x][y]=1;
        dfs(x,y+1,n,m,temp+'R',ans,vis);
        dfs(x+1,y,n,m,temp+'D',ans,vis);
        dfs(x-1,y,n,m,temp+'U',ans,vis);
        dfs(x,y-1,n,m,temp+'L',ans,vis);
        
        
        
        vis[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        string temp="";
        vector<vector<int>>vis(n,vector<int>(n,0));
        dfs(0,0,n,m,temp,ans,vis);
        return ans;
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends