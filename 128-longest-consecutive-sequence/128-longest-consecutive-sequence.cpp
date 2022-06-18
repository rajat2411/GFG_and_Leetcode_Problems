class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int num :nums){
            s.insert(num);
        }
        
      int longest=0;
        for(int num:nums){
            if(!s.count(num-1)){
                int currNum=num;
                int currStreak=1;
                while(s.count(currNum+1)){
                    currNum+=1;
                    currStreak+=1;
                }
                longest=max(longest,currStreak);

            }
        }
        return longest;
    }
};