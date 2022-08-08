class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        if(colors.length()==1) return 0;
        else if(colors.length()==2 && colors[0]==colors[1]) 
            return min(neededTime[0],neededTime[1]);
        else if(colors.length()==2 && colors[0]!=colors[1]) 
            return 0;
        
        char prev=colors[0];
        int prevInd=0;
        for(int i=1;i<colors.length();i++){
            if(prev!=colors[i]){
                prev=colors[i];
                prevInd=i;
            }
            else{
                ans+=min(neededTime[prevInd],neededTime[i]);
                // prev=colors[i];
                // prevInd=i;
                if(neededTime[prevInd]<neededTime[i]){
                    prev=colors[i];
                    prevInd=i;
                }
                
            }
            
        }
//         int prev = 0 ;
//         for(int i=1 ;i<colors.size() ;i++)
//         {
//             if(colors[i-1] != colors[i])
//                 contnue ;
//             else
//             {
//                 ans += min(neededTime[prev] ,neededTime[i]) ;
//                 if(neededTime[i] < neededTime[prev])
//                     prev = i-1;

//             }
//         }
        return ans;
    }
};