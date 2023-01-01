/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDiff = 0;
    void fun(TreeNode* root,vector<TreeNode*>&ds){

            if(!root) return;
        
            ds.push_back(root);
            
            for(auto i : ds){
                maxDiff = max(maxDiff,abs(root->val - i->val));
            }
            
            fun(root->left,ds);
            fun(root->right,ds);
            
            ds.pop_back();
        }
    
    int maxAncestorDiff(TreeNode* root,int an_min = 100000,int an_max = 0) {
        
        /*
        vector<TreeNode*>ds;
        fun(root,ds);
        return maxDiff;
        */
        
        return root ? max(maxAncestorDiff(root->left,min(root->val,an_min),max(root->val,an_max)),maxAncestorDiff(root->right,min(root->val,an_min),max(root->val,an_max))) : an_max - an_min;
        
    }
};