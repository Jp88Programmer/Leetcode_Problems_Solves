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
 * @return {number[]}
 */
let inorder = function(root,map){
    if(!root) return;
    inorder(root.left,map);
    map.set(root.val,map.has(root.val) ? map.get(root.val) + 1 : 1);
    inorder(root.right,map);
}
var findMode = function(root) {
    
    let map = new Map();
    inorder(root,map);
    let maxVal = [-1],fr = 0;
    map = new Map([...map.entries()].sort((a,b) => b[1] - a[1]))
    console.log(map)
    for(const [key,value] of map){
        if(fr <= value){
            if(fr === value)
                maxVal.push(key);
            else
                maxVal[maxVal.length-1] = key;
            fr = value;
        }    
    }
    return maxVal;
};