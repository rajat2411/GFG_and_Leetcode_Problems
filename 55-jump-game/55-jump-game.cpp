class Solution {
public:
    bool canJump(vector<int>& nums) {
         int maxi=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(maxi<=0) return false;
            maxi=max(nums[i],maxi-1);
        }
        
        return true;
    }
};