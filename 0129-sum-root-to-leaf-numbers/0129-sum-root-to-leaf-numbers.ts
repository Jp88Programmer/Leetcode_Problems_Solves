/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function sumNumbers(root: TreeNode | null,num : number = 0): number {
    
    return root.left === root.right ?  num * 10 + root.val : (root.left ? sumNumbers(root.left,num * 10 + root.val) : 0 ) + (root.right ? sumNumbers(root.right,num * 10 + root.val) : 0);
};