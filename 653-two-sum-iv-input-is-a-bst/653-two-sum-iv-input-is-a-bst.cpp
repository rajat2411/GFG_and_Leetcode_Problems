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
    
    void preorder(vector<int>&arr , TreeNode* root){
        if(!root){
            return ;
        }
        preorder(arr,root->left);
        arr.push_back(root->val);
        preorder(arr,root->right);
        
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>arr;
        preorder(arr,root);
       int l=0,r=arr.size()-1;
        while(l<r){
            if(arr[l]+arr[r]==k){
                return true;
            }
            else if(arr[l]+arr[r]>k){
                r--;
            }
            else{
                l++;
            }
            
        }
        return false;
    }
};