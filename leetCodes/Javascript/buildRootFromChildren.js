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
 * @return {boolean}
 */
 var checkTree = function(root) {
    let isEqual = false;
    let total = root.left.val + root.right.val;
    if(root.val === total){
        return isEqual = true;
    }
    return isEqual;
    
};