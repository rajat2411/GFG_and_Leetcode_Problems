class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=-1e9;
        if(nums.size()==1){
            return nums[0];
        }
        // for(int i=0;i<=nums.size()-1;i++){
        //     int curr_sum=0;
        //     for(int j=i;j<=nums.size()-1;j++){
        //         curr_sum+=nums[j];
        //         // if(curr_sum<0){
        //         //     curr_sum=0;
        //         // }
        //         if(curr_sum>maxi){
        //             maxi=curr_sum; 
        //         }
        //     }
        // }
        // return maxi;
        
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            maxi=max(maxi,curr_sum);
            curr_sum=max(curr_sum,0);
            
            
        }
        return maxi;
    }
};