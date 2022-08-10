class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse(slow);
        fast = head;
        while(slow){
            if(slow->val != fast->val) return false;
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
    
private:
    ListNode* reverse(ListNode* head){
        ListNode* answer = nullptr;
        ListNode* next = nullptr;
        while(head){
            next = head->next;
            head->next = answer;
            answer = head;
            head = next;
        }
        return answer;
    }
};