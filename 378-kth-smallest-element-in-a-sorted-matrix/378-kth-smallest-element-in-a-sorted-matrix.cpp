class Solution {
public:
    int kthSmallest(vector<vector<int>>& a, int k) {
        // priority_queue<int>pq;
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         pq.push(matrix[i][j]);
        //         if(pq.size()>k){
        //             pq.pop();
        //         }
        //     }
        // }
        // return pq.top();
        
        
        // Binary Search 
        
        int n=a.size();
        int low=a[0][0];
        int high=a[n-1][n-1];
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            int rank=0;
            for(int i=0;i<n;i++){
                rank+=upper_bound(a[i].begin(),a[i].end(),mid)-a[i].begin();
            }
            if(rank<k){
                low=mid+1;
            }
            else {
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
        
    }
};