class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        // simple maths 
        
        // for each pig there are t+1 outcomess 
        int Total=minutesToTest/minutesToDie;
        int p=ceil(log(buckets)/log(Total+1));
        return p;
        
    }
};