class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>> maxh;
        unordered_map<char, int> m;
        for(auto &e : s) m[e]++;
        for(auto &e : m) maxh.push({e.second, e.first});
        s = "";
        while(!maxh.empty()){
            auto e = maxh.top();maxh.pop();
            s.append(e.first, e.second);
        }
        return s;
    }
};