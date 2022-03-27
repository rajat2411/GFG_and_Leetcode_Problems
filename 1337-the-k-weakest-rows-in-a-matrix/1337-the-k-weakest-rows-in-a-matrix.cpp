class Solution {
public:
    int countSoldiers(vector<int>v){
        int l=0;
        int e=v.size()-1;
        while(l<=e){
            int mid=l+(e-l)/2;
            if(v[mid]==0){
                e=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        return l;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        int n=mat.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int> > > pq;
        for(int i=0;i<n;i++){
            pq.push({countSoldiers(mat[i]),i});
        }
        while(k){
            ans.push_back(pq.top().second);
            k--;
            pq.pop();
        }
        
        return ans;
        
    }
};