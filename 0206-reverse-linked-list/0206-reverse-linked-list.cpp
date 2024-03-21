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
        if(head == NULL)

         return head;
                if(head->next == NULL)

         return head;

        ListNode *t1 = head;

        ListNode *t2 = head->next;
        if(t2->next == NULL){

         t2->next = t1;
         t1->next = NULL;
         head = t2;

         return head;

}

 



ListNode *t3 = t2->next;





while(t2 != NULL)

{

 t2->next = t1;

 t1 = t2;

 t2 = t3;
 if(t3 != NULL)
  t3 = t3->next;

}

head->next = NULL;

head = t1;
       return head;
    }
};