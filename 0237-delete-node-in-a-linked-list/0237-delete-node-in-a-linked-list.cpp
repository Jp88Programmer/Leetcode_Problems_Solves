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
      
        ListNode * r = node->next;
        node->val = r->val;
        node->next = r->next;
        
        delete r;
    }
};