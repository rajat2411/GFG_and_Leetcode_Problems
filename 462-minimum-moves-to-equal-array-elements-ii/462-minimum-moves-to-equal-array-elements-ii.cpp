class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int moves=0;
        sort(nums.begin(),nums.end());
        int ind=(0+nums.size())/2;
        for(int i=0;i<nums.size();i++){
            if(i==ind){
                continue;
            }
            else{
                moves+=abs(nums[ind]-nums[i]);
            }
        }
        return moves;
    }
};