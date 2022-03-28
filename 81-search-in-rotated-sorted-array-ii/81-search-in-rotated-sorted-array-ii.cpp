class Solution {
public:
    bool search(vector<int>& nums, int target) {
	int n=nums.size();
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(nums[mid]==target)
            return true;
		// special case 
		// if starting and ending values are same, we cant decide which portion to eliminate. 
		//So we just check the 1st and last elements and increment low by 1 and decrement high by 1.
        else if(nums[mid]==nums[l] && nums[mid]==nums[h]){
            l++;
            h--;
        }
        else if(nums[l]<=nums[mid]){
            if(nums[l]<=target && target<=nums[mid])
                h=mid-1;
            else
                l=mid+1;
        }                
        else{
            if(nums[mid]<=target && target<=nums[h])
                l=mid+1; 
            else 
                h=mid-1;
        }
    }
    return false;  
}
};