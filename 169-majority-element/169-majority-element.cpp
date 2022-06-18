class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes=0,candidate=-1;
        for(int i=0;i<nums.size();i++){
            if(votes==0){
                candidate=nums[i];
                votes++;
            }
            else{
                if(nums[i]==candidate){
                    votes++;
                }
                else{
                    votes--;
                }
            }
        }
        
        // // we have our candidate 
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==candidate){
        //         count++;
        //     }
        // }
        
        return candidate;
    }
};