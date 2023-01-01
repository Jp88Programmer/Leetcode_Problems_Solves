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
    long res = 0,sum = 0,ts = 0,mod = 1e9+7;
    
    int sumUnder(TreeNode* root){
        
        if(!root) return 0;
        sum = sumUnder(root->left) + sumUnder(root->right) + root->val;
        res = max(res,sum * (ts - sum));
        return sum ;
    }
    int maxProduct(TreeNode* root) {
        
        ts = sumUnder(root);
        sumUnder(root);
        return res % mod;
        
    }
};