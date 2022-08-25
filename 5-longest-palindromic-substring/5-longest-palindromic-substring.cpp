class Solution {
public:
    string longestPalindrome(string s1) {
        // i will use LCA technique 
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int n=s1.size();
        int m=s2.size();
        int ans=0;
        string result="";
        
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    // if same 
                    dp[i][j]=1+dp[i-1][j-1];
                    if(ans<dp[i][j]){
                        // dp ij tk ki string bna luga taaki palindrome check kr sku
                        string temp=s1.substr(i-dp[i][j],dp[i][j]);
                        string temp2=temp;
                        reverse(temp2.begin(),temp2.end());
                        if(temp==temp2){
                            ans=dp[i][j];
                            result=temp;
                        }
                    }
                   
                    
                }
                 else{
                        dp[i][j]=0;
                    }
            }
        }
        return result;
        
    }
};