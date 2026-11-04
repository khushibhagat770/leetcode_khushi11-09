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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        ListNode* mover1 = list1;
        ListNode* mover2 = list2;
        while(mover1 != NULL && mover2 != NULL){ 
        if(mover1->val <= mover2->val){
            tail->next = mover1;
            mover1 = mover1->next;
        
        }
        else{
            tail->next = mover2;
            mover2 = mover2->next;
        }
        tail = tail->next;
        }
        if(mover1 != NULL){
            tail->next = mover1;
        }
        else{
             tail->next = mover2;
        }
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};