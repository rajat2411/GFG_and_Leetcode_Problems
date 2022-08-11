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
    
    bool solve(TreeNode* root,long long ll,long long rl){
         if(!root) return true;
        if(root->val <= ll || root->val >=rl) {
            return false;
        }
      bool left=  solve(root->left,ll,root->val);
        bool right =solve(root->right,root->val,rl);
        
        return left && right;
    }
    
    bool isValidBST(TreeNode* root) {
       
        return solve(root,LLONG_MIN,LLONG_MAX);
    }
};