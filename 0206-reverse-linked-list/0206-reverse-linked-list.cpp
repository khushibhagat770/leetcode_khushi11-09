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
    ListNode* reverseList(ListNode* head) {
        vector<int>arr;
        ListNode* mover = head;
        while(mover != NULL){
            arr.push_back(mover->val);
            mover = mover->next;
        }
        reverse(arr.begin() , arr.end());
        ListNode* dummy = new ListNode(0);
        ListNode* dmover = dummy;
        for(int i=0;i<arr.size();i++){
            ListNode* temp = new ListNode(arr[i]);
            dmover->next = temp;
            dmover=temp;
        }
        return dummy->next;
    }
};