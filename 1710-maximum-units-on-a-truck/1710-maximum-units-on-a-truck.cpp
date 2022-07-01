class Solution {
public:
    bool static comp(vector<int> &a,vector<int>&b){
        if(a[1]>b[1]){
            return true;
        }
        else{
            return false;
        }
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
         int count = 0;
       
        for(int i=0;i<boxTypes.size();i++){
            
            if(boxTypes[i][0]>=truckSize){
                count+= truckSize*boxTypes[i][1];
                 truckSize = 0;
            }
            else{
              truckSize -= boxTypes[i][0];
                count += boxTypes[i][0]*boxTypes[i][1];
            }
        }
        
        return count;
        
    }
};