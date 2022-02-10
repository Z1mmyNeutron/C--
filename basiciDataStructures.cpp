//Binary search Tree
    // The left subtree of a node contains only nodes with keys lesser than the node’s key.
    // The right subtree of a node contains only nodes with keys greater than the node’s key.
    // The left and right subtree each must also be a binary search tree. 
    // There must be no duplicate nodes.


//     For searching a value, if we had a sorted array we could have performed a binary search. Let’s say we want to search a number in the array, in binary search, we first define the complete list as our search space, the number can exist only within the search space. Now we compare the number to be searched or the element to be searched with the middle element (median) of the search space and if the record being searched is less than the middle element, we go searching in the left half, else we go searching in the right half, in case of equality we have found the element. In binary search we start with ‘n’ elements in search space and if the mid element is not the element that we are looking for, we reduce the search space to ‘n/2’ we keep reducing the search space until we either find the record that we are looking for or we get to only one element in search space and be done with this whole reduction. 

// Search operations in binary search tree will be very similar. Let’s say we want to search for the number, we start at the root, and then we compare the value to be searched with the value of the root, if it’s equal we are done with the search if it’s smaller we know that we need to go to the left subtree because in a binary search tree all the elements in the left subtree are smaller and all the elements in the right subtree are larger. Searching an element in the binary search tree is basically this traversal, at each step we go either left or right and at each step we discard one of the sub-trees. If the tree is balanced (we call a tree balanced if for all nodes the difference between the heights of left and right subtrees is not greater than one) we start with a search space of ‘n’ nodes and as we discard one of the sub-trees, we discard ‘n/2’ nodes so our search space gets reduced to ‘n/2’. In the next step we reduce the search space to ‘n/4’ and we repeat until we find the element or our search space is reduced to only one node. The search here is also a binary search hence the name; Binary Search Tree.
// 1. Start from the root. 
// 2. Compare the searching element with root, if less than root, then recursively call left subtree, else recursively call right subtree. 
// 3. If the element to search is found anywhere, return true, else return false. 


struct node* search(struct node* root, int key){

if (root == NULL || root -> key == key)
    return root;
if(root -> key < key)
    return search(root->right, key);
    return search(root->left, key);
}