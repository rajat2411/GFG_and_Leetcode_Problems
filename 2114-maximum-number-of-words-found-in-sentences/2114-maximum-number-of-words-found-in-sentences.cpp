class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=INT_MIN;
        for(int i=0;i<sentences.size();i++){
            
            int k=sentences[i].length();
            int counter=1;
            for(int j=0;j<k;j++){
                
                if(sentences[i][j]==' '){
                    counter++;
                }
            }
            count=max(counter,count);
        }
        return count;
    }
};