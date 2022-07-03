// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    
    bool isSafe(int x,int y,int n,vector<vector<bool>> &visited){
        if(x>=0 && y>=0 && x<n && y<n && visited[x][y]==false ){
            return true;
        }
        return false;
    }
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code herein
	    vector<vector<bool>>visited(N,vector<bool>(N,false));
	    int ans=0;
	    int x1=KnightPos[0]-1,y1=KnightPos[1]-1;
	    int x2=TargetPos[0]-1,y2=TargetPos[1]-1;
	    
	    if(x1==x2 && y1==y2){
	        return 0;
	    }
	    
	    queue<pair<int,int>>q;
	    q.push({x1,y1});
	    
	    while(!q.empty()){
	        int size=q.size();
	        ans++;
	        while(size--){
	            pair<int,int>p=q.front();
	            q.pop();
	            int xx=p.first;
	            int yy=p.second;
	            int ax[8]={1,1,-1,-1,2,-2,2,-2};
	            int ay[8]={2,-2,2,-2,1,1,-1,-1};
	            for(int i=0;i<8;i++){
	                int nx=xx+ax[i];
	                int ny=yy+ay[i];
	                
	                if(nx==x2  && ny==y2){
	                    return ans;
	                }
	                if(isSafe(nx,ny,N,visited)){
	                    visited[nx][ny]=true;
	                    q.push({nx,ny});
	                }
	            }
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends