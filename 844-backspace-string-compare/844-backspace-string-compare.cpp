class Solution {
public:
    
    void solve(string &s,stack<char> &st){
        int i=0;
        while(i<s.length()){
            if(s[i]=='#' && !st.empty()){
                st.pop();
                i++;
            }
           else if(s[i]=='#' && st.empty()){
                i++;
            }
            else{
                st.push(s[i]);
                i++;
            }
        }
    }
    bool backspaceCompare(string s, string t) {
        stack<char>s1,s2;
        solve(s,s1);
        solve(t,s2);
        
        if(s1.size()!=s2.size()){
            return false;
        }
        // while(!s1.empty() && !s2.empty()){
        //     cout<<s1.top()<<endl;
        //     cout<<s2.top()<<endl;
        //     s1.pop();
        //     s2.pop();
        // }
        
        while(!s1.empty()  && !s2.empty()){
            if(s1.top()!=s2.top()){
                return false;
            }
           else{ s1.pop();
            s2.pop();
               }
        }
        
        return true;
    }
};