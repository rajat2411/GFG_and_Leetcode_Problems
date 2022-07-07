// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
     bool knows(int a,int b,int n ,vector<vector<int> >& M){
        if(M[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        // step 1 add all candidates in stack 
        // then check two whether they know each other 
        // then check if row contain all zeroes 
        // then check col except diagonal if all are one 
        // then return ans ;
        
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knows(a,b,n,M)){
                s.push(b);
                
            }
            else{
                s.push(a);
            }
        }
        int ans=s.top();
        
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++){
            if(M[ans][i]==0){
                zero++;
            }
        }
        if(zero!=n){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(M[i][ans]==1){
                one++;
            }
        }
        
        if(one !=n-1){
            return -1;
        }
        
        return ans;
        
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends