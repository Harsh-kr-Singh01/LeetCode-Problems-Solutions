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
    ListNode* removeElements(ListNode* head, int v) {
        if(head == NULL) return NULL;
        ListNode *prev = head;

        while(head != NULL && head->val == v){
            prev = prev->next;
            head->next = NULL;
            head = prev;
        }

        if(head == NULL) return NULL;

        ListNode *curr = prev->next;

        while(curr != NULL){
            if(curr->val == v){
                prev->next = curr->next;
                curr->next = NULL;
                curr = prev->next;
            }
            else{
                prev = prev->next;
                curr = curr->next;
            }
        }
        return head;
    }
};