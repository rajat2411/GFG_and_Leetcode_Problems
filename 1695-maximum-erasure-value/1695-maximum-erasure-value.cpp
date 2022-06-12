class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        set<int>s;
        int i=0,j=0,n=nums.size(),ans=0,sum=0;
        while(i<n  &&  j<n){
            if(s.find(nums[i])==s.end()){
                sum+=nums[i];
                s.insert(nums[i]);
                ans=max(sum,ans);
                i++;
            }
            else{
                sum-=nums[j];
                s.erase(nums[j]);
                j++;
            }
        }
        return ans;
    }
};