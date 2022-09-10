class BSTiterator{
    stack<TreeNode*>st;
    bool reverse=true;
    
    public:
        BSTiterator(TreeNode* root, bool isReverse){
            
            reverse=isReverse;
            pushAll(root);
        }
    
    int next(){
        TreeNode* temp=st.top();
        st.pop();
        if(!reverse) pushAll(temp->right);
        else pushAll(temp->left);
        return temp->val;
    }
    bool hasNext(){
        return !st.empty();
    }
    
    private: 
        void pushAll(TreeNode* node){
            while(node!=NULL){
                st.push(node);
                if(reverse==true){
                    node=node->right;
                }
                else{
                    node=node->left;
                }
            }
        }
    
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        BSTiterator l(root,false);
        BSTiterator r(root,true);
        
        int i=l.next();
        int j=r.next();
        
        while(i<j){
            if(i+j==k) return true;
            else if(i+j<k) i=l.next();
            else j=r.next();
        }
        return false;
    }
};