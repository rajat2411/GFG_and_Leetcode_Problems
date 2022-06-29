class Solution {
public:
    
    void check(int i,int j,int color, vector<vector<int>> &image,int orgColor){
      
        if(i>=image.size() || j>=image[0].size()|| i<0 || j<0 || image[i][j]!=orgColor) {
             return;
        }                                                                              
        image[i][j]=color;
        check(i-1,j,color,image,orgColor);
        check(i,j+1,color,image,orgColor);
        check(i+1,j,color,image,orgColor);
        check(i,j-1,color,image,orgColor);    
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       
        int orgColor=image[sr][sc];
        if(orgColor==color){
            return image;
        }

        check(sr,sc,color,image,orgColor);
        return image;
    }
};