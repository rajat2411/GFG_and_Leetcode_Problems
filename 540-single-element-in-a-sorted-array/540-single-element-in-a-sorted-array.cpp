class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums[0];
 
        return binarySearch(0, nums.size()-1, nums);
    }
    
    int binarySearch(int start, int end, vector<int>& nums)
    {
        
        int m = (end - start) / 2 + start;
        
        if((m - start + 1) % 2 == 0)
        {
            if(nums[m] == nums[m-1])
                start = m + 1;
            else
                end = m - 1;
        } else  {
            if(nums[m] != nums[m-1])
                start = m;
            else
                end = m - 2;
        }
        
        if(start == end)
            return nums[start];
        
        
        return binarySearch(start, end, nums);
    }
};