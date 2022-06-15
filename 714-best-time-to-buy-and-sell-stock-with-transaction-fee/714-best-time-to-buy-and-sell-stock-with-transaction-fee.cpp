class Solution {
public:
    int profit=0;
    int solve(int index,vector<int> &prices,bool buy,vector<vector<int>> &dp,int fee){
        // base case 
        
        
        if(index==prices.size()){
            return 0;
        }
        if(dp[index][buy]!=-1){
            return dp[index][buy];
        }
        
        if(buy){
            profit=max(-prices[index]+solve(index+1,prices,0,dp,fee),solve(index+1,prices,1,dp,fee));
            
        }
        else{
            profit=max(prices[index]-fee+solve(index+1,prices,1,dp,fee),solve(index+1,prices,0,dp,fee));
        }
        
        return dp[index][buy]=profit;
    }
    
    
    int maxProfit(vector<int>& prices,int fee) {
        bool buy=true;
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return solve(0,prices,buy,dp,fee);
    }
};