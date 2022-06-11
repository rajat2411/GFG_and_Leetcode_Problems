// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

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
  
    int countMin(string str){
    //complete the function here
    int len=longestPalinSubseq(str);
    return (str.length()-len);
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends