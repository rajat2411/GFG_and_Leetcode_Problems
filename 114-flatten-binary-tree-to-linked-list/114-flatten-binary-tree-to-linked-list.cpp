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
//     reverse post order traversal 
//     right left root
    
//     1st approach recursion 
//     Tc O(n)
//     Sc O(n)
    // TreeNode* prev=NULL;
    void flatten(TreeNode* root) {
//         if(root==NULL)  return ;
//         flatten(root->right);
//         flatten(root->left);
        
//         root->right=prev;
//         root->left=NULL;
//         prev=root;
        
        
//          Morris Order Approach 
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                TreeNode* prev=curr->left;
                while(prev->right){
    
                prev=prev->right;
                }
                prev->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
        
    }
    
    
    
};