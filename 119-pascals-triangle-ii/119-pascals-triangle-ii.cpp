class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        for(int i = 0; i<=rowIndex ; i++){
            vector<int>temp;
            temp.push_back(1);
            for(int j = 1; j<i; j++){
                temp.push_back(ans[j-1]+ans[j]);
            }
            if(i>0) temp.push_back(1);
            ans = temp;
        }
        return ans; 
    }
};