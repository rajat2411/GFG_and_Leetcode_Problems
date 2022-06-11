// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int longestCommonSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
     
        vector<int>prev(m+1),curr(m+1);
        
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
    
    
    
    int longestPalinSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        return longestCommonSubsequence(s,t);
    }
    
  
  
    // int longestPalinSubseq(string A) {
    //     //code here
    // }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends