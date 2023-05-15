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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        
        ListNode* t = head;
        while(t!=NULL){
            v.push_back(t->val);
            t=t->next;
        }
        
        swap(v[k-1],v[v.size()-k]);
        t=head;
        int i = 0;
        while(t!=NULL && i<v.size()){
            t->val = v[i++];
            t=t->next;
        }
        
        return head;
    }
};