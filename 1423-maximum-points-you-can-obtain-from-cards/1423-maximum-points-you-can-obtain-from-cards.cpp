class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalSum=0;
        for(auto &it:cardPoints){
            totalSum+=it;
        }
        int n=cardPoints.size();
        int left=0,right=n-k;
        int tempSum=0;
        for(int i=0;i<right;i++){
            tempSum+=cardPoints[i];
        }
        int ans=totalSum-tempSum;
        while(right<n){
            tempSum-=cardPoints[left++];
            tempSum+=cardPoints[right++];
            ans=max(ans,totalSum-tempSum);
        }
        return ans;
        
    }
};