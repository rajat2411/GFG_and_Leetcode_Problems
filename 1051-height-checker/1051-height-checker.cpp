class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights.size());
        int count=0;
        for(int i=0;i<heights.size();i++){
            expected[i]=heights[i];
        }
        sort(expected.begin(),expected.end());
        for(int i=0;i<expected.size();i++){
            if(expected[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};