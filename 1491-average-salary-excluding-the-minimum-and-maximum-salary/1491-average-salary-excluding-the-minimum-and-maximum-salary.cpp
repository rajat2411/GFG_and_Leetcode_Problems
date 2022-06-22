class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double cnt=0;
        double sum=0;
        
        for(int i=1;i<=salary.size()-2;i++){
            sum+=salary[i];
            cnt++;
        }
        return sum/cnt;
    }
};