class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int > ans;
        // brute force approach 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==target-nums[j]){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};