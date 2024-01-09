/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var inorder = function(root,ds){
    
    if(!root) return ;
    
    if(root.left === null && root.right === null) {
        ds += new String(root.val);
        return ;
    }
    
        inorder(root.left,ds);
        inorder(root.right,ds);
    
//     return ds;
        
      // return inorder(root.left,ds) + inorder(root.right,ds);
    
}

var getLeafNode = (root) =>{
    
    let stack = [root];
    let result = [] ;
    
    while(stack.length){
        
        let node = stack.pop();
        
        if(node.left)
            stack.push(node.left);
        
        if(node.right)
            stack.push(node.right);
        
        if(!node.left && !node.right) result.push(root.val);
    }
    
    return result;
}
function getLeaves(root, leaves) {
        if(root != null) {
            if(root.left == null && root.right == null)
                leaves.push(root.val);
            getLeaves(root.left, leaves);
            getLeaves(root.right, leaves);
        }
    }

var leafSimilar = function(root1, root2) {
    
    
//     let ds1,ds2;
    
//         inorder(root1,ds1);
//         inorder(root1,ds2);
    
//     console.log(ds1,ds2);
    
//     if(ds1.length != ds2.length) return false;
    
//     return ds1 === ds2;
    
    
    
//     let left = getLeafNode(root1)
//     let right = getLeafNode(root2)
    
//     return (left.length === right.length && left.every((item,index) => item === right[index]));
    

    
      let leaves1 = [];
    getLeaves(root1, leaves1);
    let leaves2 = [];
    getLeaves(root2, leaves2);
    
    if(leaves1.length != leaves2.length) {
        return false;
    }
    
    for(let i = 0; i < leaves1.length; i++) {
        if(leaves1[i] != leaves2[i]) {
            return false;
        }
    }
    
    return true;

};