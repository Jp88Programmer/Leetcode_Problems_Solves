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
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0 ;
        }
        
        //finding left subtree depth
        int lh = maxDepth(root->left);
        
        //finding right subtree depth
        int rh = maxDepth(root->right);
        
        return 1 + max(lh,rh);
    }
    
    int max(int a,int b){
        return a > b ? a : b ;
    }
};