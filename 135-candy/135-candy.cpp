class Solution {
public:
    int candy(vector<int>& ratings) {
        // just travel left to right and then travel right to left ->> check the condition for rating if the rating is more then previous simply add 1 to its index in another vectro 
        
        // minimum candies for each children should be 1
        vector<int>mincandies(ratings.size(),1);
        
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1] && mincandies[i]<=mincandies[i-1]){
                mincandies[i]= mincandies[i-1]+1;
            }
        }
        
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]  && mincandies[i]<=mincandies[i+1]){
                mincandies[i]= mincandies[i+1]+1;
            }
        }
        
        int sum=0;
        for(auto &it:mincandies){
            sum+=it;
        }
        return sum;
    }
};