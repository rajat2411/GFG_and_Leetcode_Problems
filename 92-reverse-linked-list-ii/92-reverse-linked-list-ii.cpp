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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        ListNode* temp=head;
        ListNode* temp1=head;
        vector<int>v;
		//converting linked list to vector
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
		//reversing the vector accordingly
        reverse(v.begin()+l-1,v.begin()+r);
        int i=0;
		//converting vector to linked list
        while(temp1){
            temp1->val=v[i++];
            temp1=temp1->next;
        }
        return head;
    }
};