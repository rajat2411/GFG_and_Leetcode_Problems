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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
            
        }
        
        TreeNode* root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder,int prestart,int prend, vector<int>& inorder,int instart,
                       int inend,map<int,int> &mp){
        
        if(prestart>prend || instart>inend){
            return NULL;
        }
        
        TreeNode* root=new TreeNode(preorder[prestart]);
        
        // check where our root is in our inordere
        int inroot=mp[root->val];
        int left=inroot-instart;
        
        // now i know how much is in left 
        
        root->left=buildTree(preorder,prestart+1,prend+left,inorder,instart,inroot-1,mp);
        root->right=buildTree(preorder,prestart+left+1,prend,inorder,inroot+1,inend,mp);
        return root;
    }
};