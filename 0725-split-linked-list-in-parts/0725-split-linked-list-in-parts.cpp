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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        ListNode* t = head;
        
        int N = 0;
        
        while(t!=NULL){
            N++;
            t=t->next;
        }
        
        vector<ListNode*>ans;
        int div = N / k;
        
        int extra = N % k; 
        
        t = head;
        ListNode* p = t;
        for(int i = 0; i<k; i++){
            
            
            int parts = div ;
            
            if(extra > 0){
                parts += 1;
                extra--;
            }
            
            int j = 0;
            ListNode* temp = p;
            ans.push_back(p);
            ListNode* q ;
            
            while(j < parts && p){
                j++;
                q = p;
                p = p ->next;
            }
            
            if(q)
                q->next = NULL;
                
        }
        
        return ans;
    }
};