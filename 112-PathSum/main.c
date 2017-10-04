#include <stdio.h>
#include <stdbool.h>

/**
 * Definition for a binary tree node.
 **/
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool hasPathSum(struct TreeNode* root, int sum) {
    if(!root){
        return false;
    }
    if(root->val==sum&&!root->left&&!root->right){
        return true;
    }

    return hasPathSum(root->right,sum-root->val)||hasPathSum(root->left,sum-root->val);
}
int main() {
    printf("Hello, World!\n");
    return 0;
}