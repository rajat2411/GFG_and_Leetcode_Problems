class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
    int m=nums2.size();
    
    set<int>s1,s2;
    
    
    vector<int>v1,v2;
    
    vector<vector<int>>v;
    
    for(auto &it:nums1)s1.insert(it);
    for(auto &it:nums2)s2.insert(it);
    
    for(auto it:s2)
    {
        if(s1.find(it)==s1.end())v1.push_back(it);
    }
    for(auto it:s1)
    {
        if(s2.find(it)==s2.end())v2.push_back(it);
    }
    
    v.push_back(v2);
    v.push_back(v1);
    
    return v;
}
        
    
};