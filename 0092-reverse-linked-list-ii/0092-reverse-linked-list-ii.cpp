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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        int count = 0;
        ListNode* t = head;
        while(t!=NULL){
            count++;
            if(count >= left && count <= right)
                v.push_back(t->val);
            t=t->next;
        }
        reverse(v.begin(),v.end());
        t = head;
        count = 0;
        int k = 0;
        while(t!=NULL){
            count++;
            if(count >= left && count <= right)
               t->val = v[k++];
            t=t->next;
        }
        return head;
    }
};