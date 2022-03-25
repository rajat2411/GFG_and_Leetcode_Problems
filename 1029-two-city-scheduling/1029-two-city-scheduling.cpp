class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum=0;
        vector<int>diff;
        for(int i=0;i<costs.size();i++){
            sum+=costs[i][0];
            diff.push_back(costs[i][1]-costs[i][0]);
            
        }
        
        sort(diff.begin(),diff.end());
        for(int i=0;i<(costs.size())/2;i++){

        sum+=diff[i];
        }
        return sum;
    }
};