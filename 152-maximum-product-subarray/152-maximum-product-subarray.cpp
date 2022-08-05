class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int currleft_max=1;
        int currright_max=1;
        int leftMax=INT_MIN,rightMax=INT_MIN;
        for(int i=0;i<nums.size();i++){
            currleft_max*=nums[i];
            currright_max*=nums[n-(i+1)];
            leftMax=max(leftMax,currleft_max);
            rightMax=max(rightMax,currright_max);
            if(nums[i]==0) currleft_max=1;
            if(nums[n-(i+1)]==0) currright_max=1;
            
        }
        
        return max(leftMax,rightMax);
        
    }
};