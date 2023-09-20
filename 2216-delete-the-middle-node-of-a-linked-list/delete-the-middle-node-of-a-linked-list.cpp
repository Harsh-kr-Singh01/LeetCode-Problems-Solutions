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

    int size(ListNode* head){
        int i = 0;
        while(head != NULL){
            head = head->next;
            i++;
        }
        return i;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL) return NULL;

        if(size(head) == 1) return NULL;
        
        int target = size(head)/2, i = 1;

        ListNode* curr = head;
        // We need to delete the next node of the target
        while(true){
            if(i == target){
                curr->next = curr->next->next;
                // curr->next->next = NULL;
                break;
            }
            else{
                i++;
                curr = curr->next;
            }
        }
        return head;
    }
};