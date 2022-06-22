/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int>swppp(vector<int> &res,int k){
        int st=0;
        int end=res.size()-1;
       for(int i=0;i<res.size();i++){
           if(k==1){
               swap(res[st],res[end]);
               break;
           }
           k--;
           st++;
           end--;
           
           
       }
        return res;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> res;
        ListNode*curr=head;
        while(curr!=NULL){
            res.push_back(curr->val);
            curr=curr->next;
        }
       
        swppp(res,k);
       curr=head;
        int i=0;
        while(curr!=NULL){
            curr->val=res[i];
            i++;
            curr=curr->next;
        }
        return head;
        
       
    }
};