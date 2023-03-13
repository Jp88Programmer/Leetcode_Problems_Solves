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
   
bool isSymmetric(TreeNode *root)
{
    // to check wherethere root is leaf or not if yes then its symmetric 
    if(!root->left && !root->right)
        return true;
    
    // check left and right subtree condition 
    return compare(root->left,root->right);
}


bool compare(TreeNode *l, TreeNode *r)
{

    //both null then true and anyone not then not compareing therfore false
    if (!l && !r)
    {
        return true;
    }

    else if (l && !r)
    {
        return false;
    }

    else if (!l && r)
    {
        return false;
    }

    else
    {
        bool x,y ;

        // check left node value and right node value 
        if (l->val != r->val)
        {
            return false;
        }
        else
        {
            //recursive call l to left subtree and r to right subtree 
            x = compare(l->left, r->right);
            
            //recursive call l to rigth subtree and r to left subtree 
            y = compare(l->right, r->left);

            // both answer true then return true else return false 
            if (x && y)
            {
                return true;
            }
            
        }

        return false;
    }

    
}

};