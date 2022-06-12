// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
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
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int lcs=longestCommonSubsequence(str1,str2);
	    return(str1.length()+str2.length()-2*lcs);
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends