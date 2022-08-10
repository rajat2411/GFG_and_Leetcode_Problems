class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=-1e9;
        int curr_sum=0;
        if(nums.size()==1) return nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            curr_sum+=nums[i];
            ans=max(ans,curr_sum);
            curr_sum=max(curr_sum,0);
        }
        return ans;
    }
};