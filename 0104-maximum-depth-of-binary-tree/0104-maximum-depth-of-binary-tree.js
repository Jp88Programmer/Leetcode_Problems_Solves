/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
let ans = 0;
var maxDepthValue = (root,depth)=>{
    if(!root) {
        return ;
    }
    depth++;
    ans = Math.max(ans,depth);
    if(root.left)
    maxDepthValue(root.left,depth);
    if(root.right)
    maxDepthValue(root.right,depth);
}
var maxDepth = function(root) {
    
    if(!root) return 0;
    return 1 + Math.max(maxDepth(root.left),maxDepth(root.right))
    
};