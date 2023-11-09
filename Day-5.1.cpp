/**
 21. Merge Two Sorted Lists

 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(i != NULL && j != NULL){
            if(i -> val < j -> val){
                temp->next = i;
                i=i->next;
            }
            else{
                temp->next = j;
                j = j-> next;
            }
            temp = temp -> next;
        }

        while(i != NULL){
            temp->next = i;
            i=i->next;
            temp=temp->next;
        }
         while(j != NULL){
            temp->next = j;
            j=j->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(i != NULL && j != NULL){
            if(i -> val < j -> val){
                temp->next = i;
                i=i->next;
            }
            else{
                temp->next = j;
                j = j-> next;
            }
            temp = temp -> next;
        }

        while(i != NULL){
            temp->next = i;
            i=i->next;
            temp=temp->next;
        }
         while(j != NULL){
            temp->next = j;
            j=j->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};