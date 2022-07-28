/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int solve(TreeNode* root,int &maxi){
        if(!root) return 0;
        
        // check left sum
        int lsum=max(0,solve(root->left,maxi));
        // check right 
        int rsum=max(0,solve(root->right,maxi));
        // store sum of that path
        
        maxi= max(maxi,lsum+rsum+root->val);
        return max(lsum,rsum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
      int maxi=INT_MIN;
        solve(root,maxi);
        return maxi;
    }
};