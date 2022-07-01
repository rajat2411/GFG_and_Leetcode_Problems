class Solution {
public:
    void dfs(int index,vector<vector<int>>& rooms,vector<int> &vis){
        vis[index]=1;
        for(auto it:rooms[index]){
            if(!vis[it]){
                dfs(it,rooms,vis);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>vis(rooms.size(),0);
        dfs(0,rooms,vis);
        
        int cnt=0;
        for(auto &it: vis){
            if(it==1){
                cnt++;
            }
        }
        if(cnt==rooms.size()){
            return true;
        }
        else{
            return false;
        }
    }
};