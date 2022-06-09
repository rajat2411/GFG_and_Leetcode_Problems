class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n=numbers.size();
                int j=n-1;

//         for(int i=n-1;i>=0;i--){

//         if(numbers[i]<target){
//             j=i;
//             break;
//         }
//         }
        
        int i=0;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
        
        
    }
};