class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto it : piles) pq.push(it);
        while(k--){
            int a=pq.top();
            pq.pop();
            a=a-floor(a/2);
            pq.push(a);
        }
        
        int score=0;
        while(!pq.empty()){
            score+=pq.top();pq.pop();
        }
        return score;
    }
};