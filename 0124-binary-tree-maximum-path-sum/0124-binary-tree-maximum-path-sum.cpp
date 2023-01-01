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
    
    //here two main logic apply first its find maxsum at leftsubtree and rightsubstree
    //after that maxpathsum which = leftsum + rightsum + rootvalue is maximum assign 
    //and its return maximum weight edges/subtree weight  
    int maxPathDown(TreeNode* root,int &maxsum){
        
        if(!root) return 0;
        int leftSum = max(0,maxPathDown(root->left,maxsum));
        int rightSum = max(0,maxPathDown(root->right,maxsum));
        maxsum = max(maxsum,leftSum + rightSum + root->val);
        return root->val + max(leftSum,rightSum);
     
    }
    
    int maxPathSum(TreeNode* root) {
        
        int sum = INT_MIN;
        maxPathDown(root,sum);
        
        return sum;
    }
};