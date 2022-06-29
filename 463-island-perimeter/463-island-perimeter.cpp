class Solution {
public:
	int count=0;
	void dfs(vector<vector<int>> &g,int i,int j){
		if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]==0){
			count++;
			return;
		}
		if(g[i][j]==-1)return;
		g[i][j]=-1;
		dfs(g,i+1,j);
		dfs(g,i,j+1);
		dfs(g,i,j-1);
		dfs(g,i-1,j);
	}

	int islandPerimeter(vector<vector<int>>& g) {
		for(int i=0;i<g.size();i++){
			for(int j=0;j<g[0].size();j++){
				if(g[i][j]==1){
					dfs(g,i,j);
					break;
				}
			}
		}
		return count;
	}
};