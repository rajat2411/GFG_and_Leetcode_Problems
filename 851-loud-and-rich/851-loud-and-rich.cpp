class Solution {
public:
    
    int dfs(int node,vector<vector<int>>&adj,vector<int> &quiet,vector<int> &ans){
        if(ans[node]!=-1){
            return ans[node];
        }
        
        int minQt=quiet[node];
        int minpos=node;
        
        for(auto it:adj[node]){
            int insideQtNode=dfs(it,adj,quiet,ans);
            if(quiet[insideQtNode]<minQt){
                minQt=quiet[insideQtNode];
                minpos=insideQtNode;
            }
        }
        ans[node]=minpos;
        return minpos;
    }
    
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        vector<vector<int>>adj(n);
        vector<int>ans(n,-1);
        // vector<int>ans(n);
        
        
        //adjacency matrix 
        for(auto x : richer){
            adj[x[1]].push_back(x[0]);
            
        }
        
        for(int i=0;i<n;i++){
            dfs(i,adj,quiet,ans);
        }
        
        return ans;
        
    }
};