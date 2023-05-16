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
    
    ListNode* swapPairs(ListNode* head) {
        
        //method 1
        /*
        if(!head || !head->next) return head;
        ListNode* n1 = head;
        ListNode* n2 = head->next;
        
        while(n1 && n2){
            // n1->next = n2->next;
            // n2->next = n1;
            // n1=n1->next;
            swap(n1->val,n2->val);
            if(n2 && n2->next)
                n2=n2->next->next;
            if(n1 && n1->next)
                n1=n1->next->next;
        }
        
        return head;
        */
        
        //method2
        /*
        if(!head || !head->next) return head;
        
        ListNode* t = head->next;
        head->next = swapPairs(head->next->next);
        t->next = head;
        return t;
        */
        //method 3
          if(!head) return NULL;
            ListNode tmp(0);
            tmp.next = head;
            ListNode *pre = &tmp, *cur = head;
            while(cur && cur->next){
                pre->next = cur->next;
                pre = pre->next;
                cur->next = pre->next;
                pre->next = cur;
                pre = cur;
                cur = cur->next;
            }
            return tmp.next;
    }
};