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
var sumNumbers = function(root,num = 0) {
    
    return root.left === root.right ?  num * 10 + root.val : (root.left ? sumNumbers(root.left,num * 10 + root.val) : 0 ) + (root.right ? sumNumbers(root.right,num * 10 + root.val) : 0);
};