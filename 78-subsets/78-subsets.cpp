class Solution {
public:
    void solve(vector<int>& nums,vector<int> output,int index,vector<vector<int>>&ans){
        if(index>=nums.size()){
            ans.push_back(output);
            
            return;
        }
        solve(nums,output,index+1,ans);
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
        
    }
    
    
    
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>v;//to store result
        
//         for(int i=0;i<(1<<nums.size());i++){     // i<<nums.size() is power of 2 raise to power n
//             vector<int>subset;//to store subset
//             for(int j=0;j<nums.size();j++){
//                 if(i&(1<<j)){  // to vheck the set bit 
//                     subset.push_back(nums[j]);
//                 }
//             }
//             v.push_back(subset);
//         }
//         return v;
//     }
    
     vector<vector<int>> subsets(vector<int>& nums){
         vector<vector<int>>ans;
         vector<int>output;
         int index=0;
         solve(nums,output,index,ans);
         return ans ;
     }
    
    
};