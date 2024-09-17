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
    
    int heightOfTree(TreeNode* root){
        if(!root)
            return -1;
        else{
            
        
        int leftH = heightOfTree(root->left);
        int rightH = heightOfTree(root->right);
        return 1  + ( leftH > rightH ? leftH :rightH) ;
        }
    }
    bool isBalanced(TreeNode* root) {
        
        if(!root)
            return true ;
        
         bool leftT = isBalanced(root->left);
         bool rightT = isBalanced(root->right);
        
        int left = heightOfTree(root->left);
        int right = heightOfTree(root->right);
        // cout << left <<" " << right << endl;
        int diff = left - right ;
        // cout << diff << endl;
        // bool flag = true ;
        if(abs(diff) > 1)
            return false;
    else{
        if(!leftT || !rightT)
            return false;
        else
            return true;
    }
    }
};