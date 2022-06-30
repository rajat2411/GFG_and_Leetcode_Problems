/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;

    TreeNode* getTargetCopy(TreeNode* o, TreeNode* clone, TreeNode* target) {
        if(!clone){
            return NULL;
        }
        if(clone->val==target->val){
            ans=clone;
        }
        getTargetCopy(o,clone->left,target);
        getTargetCopy(o,clone->right,target);
        
        
        return ans;
    }
};