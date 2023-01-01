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

    pair<ListNode*,ListNode*> oddList(ListNode* head){

        // if(!head) return head;

        if(!head->next || !head->next->next) return {head,head->next};

        cout << head->val << " ";
        pair<ListNode*,ListNode*> p = oddList(head->next);
        
        head->next = p.second;
        return {head,p.first};

    }

    ListNode* oddEvenList(ListNode* head) {
        
        /*
        if(!head || !head->next) return head;

        ListNode* temp = head ;
        ListNode* o = oddList(temp);

        // ListNode* e = oddList(temp->next);

        return o;
        */

        if(!head || !head->next || !head->next->next) return head;

        ListNode* odd = NULL,*even = NULL,*headOdd = NULL,*headEven = NULL;

        odd = head, headOdd = odd;
        even = head->next, headEven = even;

        while(even && even->next){

            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;


        }

        odd->next = headEven;

        return headOdd;


    }
};