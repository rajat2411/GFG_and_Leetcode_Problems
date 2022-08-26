class Solution {
public:
    
    string pref(string a, string b){
        int n=a.length();
        int m=b.length();
        string res="";
        for(int i=0; i< ((n>m)?m:n);i++){  //loop continues till minimum of length of both the strings
            if(a[i]==b[i])   // if characters are same add it to result
                res+=a[i];
            else break;
        }
        return res;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if(strs.size()==0)return ""; //base-case
        if(strs.size()==1)return strs[0]; //base-case
        res=pref(strs[0],strs[1]);
        
        for(int i=2;i<strs.size();i++){
            res=pref(res,strs[i]); //iterate over all the strings and keep storing the result in res
        }
        return res;
    }
};