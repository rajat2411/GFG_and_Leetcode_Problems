class Solution{
    public:
int profit=0;
    int solve(int index,vector<int> &prices,bool buy,int cap,vector<vector<vector<int>>>&dp){
        // base case 
        
        if(cap==0){
            return 0;
        }
        if(index==prices.size()){
            return 0;
        }
        if(dp[index][buy][cap]!=-1){
            return dp[index][buy][cap];
        }
        
        if(buy){
            profit=max(-prices[index]+solve(index+1,prices,0,cap,dp),solve(index+1,prices,1,cap,dp));
            
        }
        else{
            profit=max(prices[index]+solve(index+1,prices,1,cap-1,dp),solve(index+1,prices,0,cap,dp));
        }
        
        return dp[index][buy][cap]= profit;
    }
    
    
    int maxProfit(vector<int>& prices) {
        bool buy=true;
        // vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(0,prices,buy,2,dp);
    }
};