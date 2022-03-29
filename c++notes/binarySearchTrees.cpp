#include <iostream>
using namespace std;
/* A binary tree node has data, pointer to left child
and a pointer to right child */

int n = 1;
class node {
public:
int data;
node* left;
node* right;
};
/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(int data) {
node* Node = new node();
Node->data = data;
Node->left = NULL;
Node->right = NULL;
return(Node);
}
/* Computes the number of nodes in a tree. */

int size(node* node) {
    if(node == NULL)
        return 0;
    if(node->left != NULL){
        n=n+1;
        n=size(node->left);
    }
    if(node->right!=NULL){
        n=n+1;
        n=size(node->right);
    }
    return n;

/* your code goes here*/
}
/* Compute the "maxDepth" of a tree -- the number of
nodes along the longest path from the root node
down to the farthest leaf node.*/
int maxDepth(node* node) {
/* your code goes here */
    if(node == NULL){
        return -1;
    }else{
        int leftDepth = maxDepth(node->left);
        int rightDepth = maxDepth(node->right);
        if(leftDepth > rightDepth){
            return(leftDepth+1);
        }else{
            return(rightDepth+1);
        }
    }
}
/* Driver code*/
int main() {
node *root = newNode(20);
root->left = newNode(40);
root->right = newNode(60);
root->right->left = newNode(80);
root->left->left = newNode(90);
root->left->right = newNode(100);
root->left->right->left = newNode(120);
root->left->right->left->left = newNode(130);
root->left->right->left->right = newNode(140);
root->left->right->left->left->left = newNode(180);
root->left->right->left->right->right = newNode(200);
cout << "Size of the tree is " << size(root) << endl;
cout << "Height of tree is " << maxDepth(root) << endl;
return 0;
}
