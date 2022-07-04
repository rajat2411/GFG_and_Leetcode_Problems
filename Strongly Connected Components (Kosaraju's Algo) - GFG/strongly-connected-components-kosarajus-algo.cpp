// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	
 
  void dfs1(int i,vector<bool> &vis,stack<int> &st,vector<int> adj[])
{
    vis[i]=true;
    for(auto it:adj[i])
    {
        if(vis[it]==false)
        dfs1(it,vis,st,adj);
    }
    st.push(i);
}
void reverse(int V,vector<int>adj[],vector<int> radj[],vector<bool>&vis)
{
    for(int i=0;i<V;i++)
    {
        vis[i]=0;
        for(auto it:adj[i])
        radj[it].push_back(i);
    }
}
void dfs2(int i,vector<bool>&vis,vector<int> radj[])
{
    vis[i] = true;
   for (auto j : radj[i])
   {
       if (vis[j]==false)
           dfs2(j, vis,radj);
   }
}
//Function to find number of strongly connected components in the graph.
   int kosaraju(int V, vector<int> adj[])
   {
       stack<int> st;
       vector<bool> vis(V,false);
   
   for(int i=0;i<V;i++)
   {
       if(vis[i]==false)
       {
           dfs1(i,vis,st,adj);
       }
   }
   vector<int> radj[V];
reverse(V,adj,radj,vis);
int cnt=0;
   while(!st.empty())
   {
       int x=st.top();
       st.pop();
       if(vis[x]==false)
       {
           dfs2(x,vis,radj);
           cnt++;
       }
   }
  return cnt;
   
   }
	
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends