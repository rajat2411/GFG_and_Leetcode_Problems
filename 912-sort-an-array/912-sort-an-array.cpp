class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=0;j<nums.size();j++){
    //             if(nums[i]<nums[j]){
    //                 swap(nums[i],nums[j]);
    //             }
    //         }
    //     }
    //     return nums;
    // }
        
        sort(nums.begin(),nums.end());
        return nums;
    }
};