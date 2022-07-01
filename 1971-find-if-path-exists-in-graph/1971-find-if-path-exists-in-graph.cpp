class Solution {
public:
 bool solve(vector<vector<int>>& graph, vector<bool>& vis,int target,int current){
// if the node is already visited then its a simple case that the path doesnt exit because we have returned back to the same node
        if(vis[current] == 1) return 0; 
    
// if we reach our target then we return true
        if(current == target) return 1; 
        
// else we mark the current node as visited first
        vis[current] = 1;
        
// then we start visiting its neighboring nodes from the adjacency list we created
        for(int i = 0 ; i < graph[current].size(); i++) {
//we do a recursive call again passing the current element as the neighbor in our adjacency list
            if(solve(graph,vis,target,graph[current][i])) return 1;
        }
        
        return false;
        
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (source == destination) return 1;
// Build the graph adjacency list
        vector<vector<int>> graph(n);
        for(int i = 0 ; i < edges.size() ; i ++) {
            int first = edges[i][0], second = edges[i][1];
            graph[first].push_back(second);
            graph[second].push_back(first);
            
        }
        
// We create our own visited array to track the visited nodes
        vector<bool> vis(n,false); 
        
// the dfs traversal of our graph begins
        for(int i = 0 ; i < graph.size() ; i++) {
            if(source == i && solve(graph,vis,destination,i)) return 1;
        }
        
        return 0;
    }
};