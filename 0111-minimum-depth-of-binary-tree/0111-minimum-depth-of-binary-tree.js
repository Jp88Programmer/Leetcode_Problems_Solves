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
var height = function(root,depth){
    if(!root) return 1000000;
    if(!root?.left && !root?.right){
        depth++;
        // mindepth = Math.min(mindepth,depth);
        return depth;
    }
     return Math.min(height(root.left,depth+1),
        height(root.right,depth+1));
}
var minDepth = function(root) {
    if(!root) return 0;
    return height(root,0);
    
};