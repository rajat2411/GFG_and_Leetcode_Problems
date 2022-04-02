class Solution {
public:
    bool isPalindrome(int i, int j, string s) {
        while(i<=j) {
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<=j) {
            if(s[i]!=s[j]) {
                if(isPalindrome(i+1,j,s) || isPalindrome(i,j-1,s))
                    return true;
                else
                    return false;
            }
            i++;
            j--;
        }
        return true;
    }
};