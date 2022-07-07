class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=0;
        for(auto it : candies){
            if(it>maxi){
                maxi=it;
            }
        }
        
        vector<bool>ans(candies.size(),false);
        for(int i=0 ; i<candies.size();i++){
            if(candies[i]+extraCandies>=maxi){
                ans[i]=true;
            }
            else{
                continue;
            }
        }
        return ans;
        
    }
};