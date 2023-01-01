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
    void inorder(TreeNode* root,vector<int>&ds){
        
        if(!root) return;
        if(!root->left && !root->right) {
            ds.push_back(root->val);
            return;
        }
        inorder(root->left,ds);
        inorder(root->right,ds);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int>left,right;
        
        inorder(root1,left);
        inorder(root2,right);
        
        if(left.size() != right.size()) return false;
        
        for(int i = 0; i<left.size(); i++)
        {
            if(left[i] != right[i]) return false;
        }
        return true;
    }
};