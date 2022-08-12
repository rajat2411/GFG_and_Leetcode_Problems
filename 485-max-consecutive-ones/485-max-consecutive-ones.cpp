class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int cnt=0;
        for(auto it:nums){
            if(it==1){
                cnt++;
                maxi=max(cnt,maxi);
            }
            
            if(it==0){
                cnt=0;
            }
        }
        
        return maxi;
    }
};