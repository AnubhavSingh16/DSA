/*
141. Linked List Cycle

INTUTION - Using fast and slow pointer, if fast meets slow there is loop
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL){
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;

        if(fast -> next == NULL){
            return false;
        }
        
        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
                slow = slow -> next;
            }
            
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};