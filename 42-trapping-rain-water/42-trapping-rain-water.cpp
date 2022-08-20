class Solution {
public:
    int trap(vector<int>& height) {
//           int ans=0;
//         int n=height.size();
//         vector<int>left(n);
//         vector<int>right(n);
//         vector<int>water(n);
        
        
        
//         left[0]=height[0];
//         for(int i=1;i<n;i++){
//             left[i]=(max(height[i],left[i-1]));
//         }
       
//         right[n-1]=height[n-1];
//         for(int i=n-2;i>=0;i--){
//             right[i]=(max(height[i],right[i+1]));
//         }
         
        
       
//         for(int i=0;i<height.size();i++){
//             water[i]=min(left[i],right[i])-height[i];
//         }
//         for(int i=0;i<water.size();i++){
//             ans+=water[i];
//         }   
//         return ans;
        
        
        int l=0;
        int r=height.size()-1;
        int res=0;
        int leftMax=0;
        int rightMax=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=leftMax){
                    leftMax=height[l];
                }
                else{
                    res+=leftMax-height[l];
                }
                l++;
            }
            
            else{
                if(height[r]>=rightMax){
                    rightMax=height[r];
                }
                else{
                    res+=rightMax-height[r];
                }
                r--;
            }
        }
        return res;
        
        
        
        
    }
};