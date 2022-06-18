class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        unordered_set<int>sett;
        int l=0;
        int max_ans=INT_MIN;
        for(int r=0;r<s.length();r++){
            // check in set
            if(sett.find(s[r])!=sett.end()){
                while(l<r && sett.find(s[r])!=sett.end()){
                    sett.erase(s[l]);
                    l++;
                }
            }
            sett.insert(s[r]);
            max_ans=max(max_ans,r-l+1);
            
            
        }
        return max_ans;
    }
};