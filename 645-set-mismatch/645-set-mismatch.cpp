class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    vector<int> ans;
    unordered_map<int,int> m;
    int n = nums.size();
    int d=0;
    for(int i=0;i<n;i++){m[nums[i]]++; d+=nums[i];}
    
    int sum = (n*(n+1))/2;
    
    for(auto i:m){
        if(i.second > 1){
            ans.push_back(i.first);
        }
        
    }
  
    d=d-ans[0];
    
    ans.push_back(sum-d);
    
    
    return ans;
}
};