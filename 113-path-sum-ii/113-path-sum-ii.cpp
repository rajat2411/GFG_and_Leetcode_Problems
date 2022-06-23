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
    
    void solve(TreeNode* root,int sum, int targetSum,vector<vector<int>> &ans,vector<int> res)
    {
        if(!root){
            return ;
        }
        sum+=root->val;
        res.push_back(root->val);
        if(!root->left && !root->right ){
            if(sum==targetSum){
                ans.push_back(res);
            }
        }
        solve(root->left,sum,targetSum,ans,res);
        solve(root->right,sum,targetSum,ans,res);
        
        
        
        
        
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> res;
        if(!root){
            return ans;
        }
        solve(root,0,targetSum,ans,res);
        return ans;
    }
};