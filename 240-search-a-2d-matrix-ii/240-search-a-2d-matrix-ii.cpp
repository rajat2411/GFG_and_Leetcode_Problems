class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int row=m.size()-1;
        int col=m[0].size()-1;
        int i=0,j=col;
         if(target < m[0][0] || target > m[row][col]|| row+1==0) return false;
         
        while(i<=row && j>=0){
            if(m[i][j]==target){
                return true;
            }
            else if(m[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};