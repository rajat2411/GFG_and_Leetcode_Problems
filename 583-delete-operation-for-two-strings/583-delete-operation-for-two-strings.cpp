class Solution {
public:
    int longestCommonSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        vector<int>prev(m+1),curr(m+1);
        
        // return f(n,m,text1,text2,dp);
        
        
        // for(int i=0;i<=n;i++){
        //     prev[0]=0;
        // }
        for(int j=0;j<=m;j++){
            prev[j]=0;
        }
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(s[i-1]==t[j-1]){
                 curr[j]= 1+prev[j-1];
            }

            else  curr[j]= max(prev[j],curr[j-1]);

            }
            prev=curr;
        }
        return prev[m];

    }
    
    int minDistance(string word1, string word2) {
        int lcs=longestCommonSubsequence(word1,word2);
        return (word1.length()+word2.length()-2*lcs);
    }
};