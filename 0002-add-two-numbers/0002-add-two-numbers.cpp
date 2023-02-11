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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
 ListNode *l3 = NULL;
 ListNode *t1,*t2;
 t1 = l1;
 t2 = l2;
 int lead = 0;
 while(t1 != NULL || t2 != NULL){
     int listVal1;
     int listVal2;
    if(t1 == NULL)
        listVal1 = 0;
    else
        listVal1 = t1->val;
    if(t2 == NULL)
        listVal2 = 0;
    else
       listVal2 = t2->val;
 int digit = (lead + listVal1 + listVal2) % 10;
 lead = (lead + listVal1 + listVal2) / 10;
 ListNode *n = new ListNode;
 n->val = digit;
 n->next = NULL;
 if(l3 == NULL)
 l3 = n;
 else{
  ListNode *t = l3;
 while(t->next != NULL)
  t=t->next;
 t->next = n;
 }
 if(t1!=NULL)
 t1 = t1->next;
 if(t2!=NULL)
 t2 = t2->next;
}
        delete(t1);
        delete(t2);
 if(lead != 0){
     ListNode *n = new ListNode;
     n->val = lead;
     n->next = NULL;
     ListNode *t = l3;
     while(t->next != NULL)
      t=t->next;
     t->next = n;
    t = NULL;
    delete(t);
 }
return (l3);
    }
};