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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        
        /*
        priority_queue<int>pq;
           
        int n = arr.size();
           for(int i = 0 ; i<n; i++){
               
               ListNode* t = arr[i];
               
               while(t!=NULL){
                   pq.push(t->val);
                   t = t->next;
               }
           }
           
           ListNode* res = NULL;
           
           while(!pq.empty()){
               
               if(res == NULL){
                   ListNode* n = new ListNode(pq.top());
                   res = n;
                   pq.pop();
               }else{
                   ListNode* n = new ListNode(pq.top());
                   n->next = res ;
                   res = n;
                   pq.pop();
               }
           }
           
           return res;
          
        */
        vector<int>v;
        int n = arr.size();
           for(int i = 0 ; i<n; i++){
               
               ListNode* t = arr[i];
               
               while(t!=NULL){
                   v.push_back(t->val);
                   t = t->next;
               }
           }
           
           ListNode* res = NULL;
           
           
          sort(v.begin(),v.end());
          
          for(int i = v.size() - 1; i>= 0; i--){
              
               if(res == NULL){
                   ListNode* n = new ListNode(v[i]);
                   res = n;
               }else{
                   ListNode* n = new ListNode(v[i]);
                   n->next = res ;
                   res = n;
               }
          }
        
        return res;
           
    }
};