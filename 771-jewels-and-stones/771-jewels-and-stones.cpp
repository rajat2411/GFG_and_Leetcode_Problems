class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
         for(int i=0;i<jewels.size();i++){
            mp[jewels[i]]=1;
                
            
        }
                int ans=0;

        for(int i=0;i<stones.length();i++){
            if(mp[stones[i]]==1){
                ans++;
            }
            
        }
       
        return ans;
    }
};