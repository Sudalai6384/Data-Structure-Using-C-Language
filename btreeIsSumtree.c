#include <stdio.h>
#include <stdlib.h>

// Binary Tree Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new Binary Tree Node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

// Function to calculate the sum of all nodes of a binary tree
int sumTree(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    return sumTree(root->left) + root->data + sumTree(root->right);
}

// Function to check if a binary tree is a SumTree or not
int isSumTree(struct Node* root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return 1;
    }
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);
    if ((root->data == leftSum + rightSum) && isSumTree(root->left) && isSumTree(root->right)) {

