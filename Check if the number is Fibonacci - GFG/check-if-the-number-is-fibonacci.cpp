// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string checkFibonacci(int n){
        // code here 
        // A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square.
        int x=5*n*n+4;
        int y=5*n*n-4;
        
        int k=sqrt(x);
        int l=sqrt(y);
        if(k*k==x || l*l==y){
            return "Yes";
        }
        return"No";
        
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends