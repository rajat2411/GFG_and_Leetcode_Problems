class cmp{
    public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
};
class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
      priority_queue<pair<int,string>,vector<pair<int,string >>,cmp>pq;
        unordered_map<string,int>m;
        for(auto &word:words){
            m[word]++;
        }
        for(auto &it:m){
            pq.push({it.second,it.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};