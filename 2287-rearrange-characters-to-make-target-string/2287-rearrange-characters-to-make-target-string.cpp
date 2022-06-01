class Solution {
public:
    int rearrangeCharacters(string A , string B ) {
        
        int b[128] = {0};
        int a[128] = {0};
        
        for( auto x : A ) a[x]++;
        for( auto x : B ) b[x]++;
        
        int mn = INT_MAX ;
        
        for( int i = 0 ; i < 128 ; i++ )
           if( b[i] )
              mn = min( mn , a[i]/b[i] );
        
        return mn  ;
    }
};