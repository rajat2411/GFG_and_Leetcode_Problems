class Solution 
{
public:
    vector<int> findSubstring(string s, vector<string>& words) 
    {
       vector<int> res;
        int n=words.size();
        int m=words[0].size();
        unordered_map<string,int> freq;
        for(auto i:words)
        {
            freq[i]++;
        }
        if(s.size()==0||s.size()<n*m)
        {
            return res;
        }
        for(int i=0;i<=s.size()-(m*n);i++)
        {
            unordered_map<string,int> ourfreq=freq;
            int j;
            for( j=0;j<n;j++)
            {
                
                string substre=s.substr(i+m*j,m);
                
                if(ourfreq[substre]==0)
                {
                    break;
                }
                else
                {
                    ourfreq[substre]--;
                }
                
            }
            // cout<<endl;
            if(j==n)
            {
                res.push_back(i);
            }
        }
        return res;
    
        
    }
};












// class Solution {
// public:
//     long long  stringSum(string word){
//         long long sum=0;
//         for(auto it: word){
//             sum+=it;
//         }
//         return sum;
//     } 
//     vector<int> findSubstring(string s, vector<string>& words) {
//         long long  sum=0;
//         int wordLen=words[0].size();
//         vector<int> ans;
//         string temp="";
//         for(auto it:words){
//             temp+=it;
//             sum+=stringSum(it);
//         }
//         // now i have sum
//         cout<< temp<<endl;
//         cout<<sum<<endl;
        
        
//         int  stringlen=temp.length();
//         cout<<stringlen<<endl;
        
//         for( int i=0;i<s.length()-stringlen+1;i+=wordLen){
//             int k=i;
//             int j=i+stringlen-1;
//             cout<<i<<"   "<< j <<endl;
//             long long  tempsum=0;
//             while(k<=j){
//                 tempsum+=s[k];
//                 k++;
//             }
//             // tempsum store krleaya
//             cout<<tempsum<<endl;
//             if(tempsum==sum){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };
























