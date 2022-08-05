class Solution {
public:
    int func(vector<int>& nums,int n,vector<int>& dp){
    if(n==0)
      {
return 1;
}
if(n<0) return 0;

    if(dp[n]!=-1)
      {
    return dp[n];
    }
    int ans=0;
for(int i=0;i<nums.size();i++)
    {
    if(n-nums[i]<0)
        break;
   ans+= func(nums,n-nums[i],dp);
    
}
    return dp[n]=ans;
    }
int combinationSum4(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    vector<int> dp(target+1,-1);
   int cnt = func(nums,target,dp);
    return cnt;
    
}
};