// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

int solve(int arr[],int n,int idx,vector<int> &dp){
        if(idx==0){
            return arr[idx];
        }
        if(idx<0){
            return 0;
        }
        
        if(dp[idx]!=-1){
            return dp[idx];
        }
        
            int fs=arr[idx]+solve(arr,n,idx-2,dp);
            
            int ss=0+solve(arr,n,idx-1,dp);
            // dp[idx]=max(fs,ss);
        
            return dp[idx]=max(fs,ss);
    }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	     vector<int> dp(n+1,-1);
        return solve(arr,n,n-1,dp);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends