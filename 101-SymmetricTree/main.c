#include <stdio.h>
#include <stdbool.h>

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
bool Judge(struct TreeNode* root1,struct TreeNode* root2){
    bool b1=false,b2=false;
    if(!root1&&!root2){
        return true;
    }
    else if(!root1||!root2){
        return false;
    }

    if(root1->val!=root2->val){
        return false;
    }

    return Judge(root1->left,root2->right)&&Judge(root1->right,root2->left);
}
bool isSymmetric(struct TreeNode* root) {
    if(root==NULL){
        return true;
    }

    return Judge(root->left,root->right);

}int main() {
    printf("Hello, World!\n");
    return 0;
}