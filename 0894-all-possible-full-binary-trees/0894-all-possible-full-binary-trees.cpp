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
private:
    TreeNode* fun(int id,vector<int>&arr,TreeNode* root){
       
        if(id < 1 || id > arr.size()) return root;
        if(!root){
            root = new TreeNode(0);
            root->left = fun(id-2,arr,root->left);
            root->right = fun(id+2,arr,root->right);
        }
        return root;
    }
public:
    vector<TreeNode*> allPossibleFBT(int n) {
    
        /*
        vector<int>arr(0,n);
        vector<TreeNode*>ans;    
        for(int i = 1; i<n ; i+=2){
            TreeNode* root = NULL;
            ans.push_back(fun(i,arr,root));
        }
        return ans;
        */
        
        vector<TreeNode*>ans;
        
        if(n % 2 == 0) return {};
        
        if(n == 1){
            // vector<TreeNode*>vtr ;
            // vtr.push_back(new TreeNode(0));
            return {new TreeNode(0)};
        }
        
        for(int i=1; i<n ; i+= 2){
            
            vector<TreeNode*>left = allPossibleFBT(i);
            vector<TreeNode*>right = allPossibleFBT(n-i-1);
            
            for(auto l : left){
                
                for(auto r : right){
                    TreeNode * root = new TreeNode(0);
                    root->left = l;
                    root->right = r;
                    ans.push_back(root);
                }
            }
        }
        
        return ans;
    }
};