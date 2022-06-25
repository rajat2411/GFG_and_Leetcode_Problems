class Solution {
public:
    int findMin(vector<int>& nums) {
       priority_queue<int,vector<int>,greater<int>>pq;
        for(auto &it:nums){
            pq.push(it);
        }
        return pq.top();
        
    }
};