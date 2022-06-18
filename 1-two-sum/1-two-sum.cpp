class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int > ans;
        // brute force approach 
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==target-nums[j]){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return ans;
        
        // use of hashind 
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[target-nums[i]]);
                break;
            }
            mpp[nums[i]]=i;
        }
        return ans;
        
    }
};