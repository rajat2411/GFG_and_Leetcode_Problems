// memoization 
class Solution {
public:
    
//     // int solve(vector<int>&nums ,vector<int> &dp, int index){
//         if(index==0){
//             return nums[index];
//         }
       
//         if(index<0){
//             return 0;
//         }
//          if(dp[index]!=-1){
//             return dp[index];
//         }
        
//         int left=nums[index]+solve(nums,dp,index-2);
//         int right=0+solve(nums,dp,index-1);
//        return  dp[index]=max(left,right);
//     }
    // int rob(vector<int>& nums) {
    //     vector<int>dp(nums.size(),-1);
    //     return solve(nums,dp,nums.size()-1);
    // }
    
    // space optimisation
   int rob(vector<int>& nums) {
       int n=nums.size();
       // vector<int>dp(n,0);
       int prev=nums[0];
       int prev2=0;
       for(int i=1;i<n;i++){

       int pick=nums[i];
           if(i>1){

           pick+=prev2;
           }
       int notpick=0+prev;
      int curri=max(pick,notpick);
           prev2=prev;
           prev=curri;
       
       }
      return prev;
       
    }
    
};




