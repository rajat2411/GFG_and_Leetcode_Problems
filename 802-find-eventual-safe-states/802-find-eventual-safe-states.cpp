class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<bool>&vis,vector<bool> &dfsvis,vector<bool> &present_cycle){
        vis[node]=true;
        dfsvis[node]=true;
        vector<int>data = graph[node];
        for(auto it: data){
            if(!vis[it]){
               if( dfs(it,graph,vis,dfsvis,present_cycle)){
                   return present_cycle[node]=true;
               }
               
            }
             else if(vis[it] && dfsvis[it]){
                    return present_cycle[node]=true;
                }
        }
        
        dfsvis[node]=0;
        return false;
        
        
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> ans;
        vector<bool>vis(n,0);
        vector<bool>dfsvis(n,0);
        vector<bool>present_cycle(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,graph,vis,dfsvis,present_cycle) ;
            }
        }
        
        for(int it=0;it<present_cycle.size();it++){
            if(!present_cycle[it]){
                ans.push_back(it);
            }
        }
        return ans;
    }
};