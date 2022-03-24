// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long numberOfWays(long long N) {
        //code here
        long long fib[N+1];
		fib[1] = 1;
		fib[2] = 2;
		for(int i=3 ; i<=N ; i++)
			fib[i] = (fib[i-1]+fib[i-2])%1000000007;
			
		return fib[N];
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends