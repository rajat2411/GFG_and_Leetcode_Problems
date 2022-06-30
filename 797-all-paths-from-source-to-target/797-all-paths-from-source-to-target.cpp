class Solution {
public:
    
    void dfs(int node,vector<vector<int>>&ans,vector<vector<int>>&graph,vector<int>temp){
        temp.push_back(node);
        for(auto it: graph[node]){
            dfs(it,ans,graph,temp);
        }
        if(node==graph.size()-1){
            ans.push_back(temp);
        }
        temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>temp;
        dfs(0,ans,graph,temp);
        return ans;
    }
};