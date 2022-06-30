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
    void dfs(vector<int> &ans,TreeNode* root){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            ans.push_back(root->val);
        }
        dfs(ans,root->left);
        dfs(ans,root->right);
        
        
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> temp1,temp2;
        dfs(temp1,root1);
        dfs(temp2,root2);
        if(temp1==temp2){
            return true;
        }
        else{
            return false;
        }
    }
};