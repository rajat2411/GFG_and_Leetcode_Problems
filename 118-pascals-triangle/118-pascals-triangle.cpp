class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> r(n);
        for(int i=0;i<n;i++){

        r[i].resize(i+1);// everytime row increase by 1
            r[i][0]=r[i][i]=1;// first and last always 1
            
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
    }
};