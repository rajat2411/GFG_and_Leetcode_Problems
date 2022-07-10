class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>>pq;
        for(auto  it :points){
            pq.push({it[0]*it[0]+it[1]*it[1],{it[0],it[1]}});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(pq.size()!=0){
            vector<int>temp;
            auto p=pq.top();
            pq.pop();
            temp.push_back(p.second.first);
            temp.push_back(p.second.second);
            ans.push_back(temp);
        }
        return ans;
        
    }
};