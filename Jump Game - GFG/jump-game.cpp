// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution {
 public:
 bool dfs(int A[],int N,int idx)
{
   if(idx>=N-1)
   {
       return true;
   }
   if(A[idx]==0)
   {
       return false;
   }
   int ele=A[idx];
   
   for(int i=1;i<=ele;i++)
   {
       if(dfs(A,N,idx+i))return true;
   }
   return false;
}
   int canReach(int A[], int N) {
       // code here
       return dfs(A,N,0);
      // return 0;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends