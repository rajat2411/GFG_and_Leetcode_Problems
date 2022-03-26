class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int i=0;
        int j=0;
        sort(nums.begin(),nums.end());
        for( i;i<n&&j<n;i++){
            ans[j]=nums[i];
            j+=2;
        }
          j=1;
         for(i;i<n &&j<n;i++){
            ans[j]=nums[i];
            j+=2;
        }
        return ans;
        
    }
};