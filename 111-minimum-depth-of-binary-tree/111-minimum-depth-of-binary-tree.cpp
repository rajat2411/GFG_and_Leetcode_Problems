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
    int minDepth(TreeNode* root) {
        if(!root) return NULL;
        int lh=minDepth(root->left);
    int rh=minDepth(root->right);
    int ans;
    if(lh==0 && rh==0) ans=1;
    else if(lh==0 && rh!=0) ans=1+rh;
    else if(lh!=0 && rh==0) ans=1+lh;
    else if(lh!=0 && rh!=0) ans=1+min(lh,rh);
    return ans;
    }
};