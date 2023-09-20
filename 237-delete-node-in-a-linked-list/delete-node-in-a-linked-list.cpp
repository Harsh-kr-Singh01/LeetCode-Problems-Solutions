/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *curr = node->next;
        while(curr->next != NULL){
            node->val = curr->val;
            node = node->next;
            curr = curr->next;
        }
        node->val = curr->val;
        node->next = NULL;
    }
};