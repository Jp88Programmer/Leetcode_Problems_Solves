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
TreeNode *createNode(int item)
{
    TreeNode *t;
    t = (TreeNode *)new TreeNode;
    t->left = NULL;
    t->right = NULL;
    t->val = item;
    return (t);
}
    int search(vector<int> &v, int val)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == val)
        {
            return i;
        }
    }

    return 0;
}


TreeNode* makeTree(int &idx,vector<int>&inorder,vector<int>postorder,int inStart,int inEnd){

    
    if (idx < 0 || inStart > inEnd)
    {
        return NULL;
    }

    // here the main node value store and make the node and join the tree
    int val = postorder[idx];

    // refrence decrement 
    idx--;
    
    // search the val to inorder and divided two sub array from this index 
    int index = search(inorder, val);
    
    //make the node 
    TreeNode *root = new TreeNode(val);

    // build right subtree
    root->right = makeTree(idx,inorder,postorder,index + 1,inEnd);
    
    // build left subtree
    root->left = makeTree(idx,inorder,postorder,inStart,index - 1);

    return root ;
}

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    if (inorder.size() != postorder.size())
    {
        return NULL;
    }

    int idx = postorder.size() - 1;

    return makeTree(idx,inorder, postorder, 0, inorder.size() - 1);
}

};