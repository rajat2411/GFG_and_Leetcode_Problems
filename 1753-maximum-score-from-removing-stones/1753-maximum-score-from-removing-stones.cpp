class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int score=0;
        while(pq.size()>2){
            int x=pq.top();pq.pop();
            int y=pq.top();pq.pop();
            int z=pq.top();pq.pop();
            
            if(y!=0){
                score+=1;
                x=x-1;
                y=y-1;
                pq.push(x);
                pq.push(y);
                pq.push(z);

            }

        }
        
return score;
    }
};