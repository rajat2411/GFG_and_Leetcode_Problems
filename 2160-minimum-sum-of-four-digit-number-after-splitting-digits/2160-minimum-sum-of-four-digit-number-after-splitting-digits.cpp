class Solution {
public:
    int minimumSum(int num) {
        string str = to_string(num);
        sort(str.begin(),str.end());

        int nm1=0, nm2=0;
        
        for(int i=0;i<str.size();i++)
        {
            if(i%2==0)
            {
                nm1 = nm1*10+(str[i]-'0');
            }
            else
            {
                nm2 = nm2*10+(str[i]-'0');
            }
        }
        return nm1+nm2;
    }
};