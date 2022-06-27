class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        // ans.push_back(num[0]);
        for(int i=0;i<num.length();++i){
            while(ans.size() && num[i]<ans.back() && k){
                ans.pop_back();
                --k;
            }
            ans.push_back(num[i]);
        }
        while(k--){
            ans.pop_back();
        }
        while( ans.size() &&ans[0]=='0'){
            ans.erase(begin(ans));
        }
        
        if(ans.size()){
            return ans;
        }
        else{
            return "0";
        }
        
    }
};