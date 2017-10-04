#include <stdio.h>

/**
 * Definition for a binary tree node.
 * */
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
void exchange(struct TreeNode* root){
    struct TreeNode* t;
    t=root->left;
    root->left=root->right;
    root->right=t;

}
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root==NULL){
        return NULL;
    }
    if(root->left!=NULL||root->right!=NULL){
        exchange(root);
    }
    if(root->right){
        invertTree(root->right);
    }
    if(root->left){
        invertTree(root->left);
    }

}
int main() {
    printf("Hello, World!\n");
    return 0;
}