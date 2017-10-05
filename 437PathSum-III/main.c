#include <stdio.h>

/**
 * Definition for a binary tree node.
 */

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int Sum(struct TreeNode* root,int p, int sum){
    if(!root){
        return 0;
    }
    int current=p+root->val;

    return (current==sum)+Sum(root->left,current,sum)+Sum(root->right,current,sum);

}
int pathSum(struct TreeNode* root, int sum) {
    if(!root){
        return 0;
    }

    return Sum(root,0,sum)+pathSum(root->right,sum)+pathSum(root->left,sum);
}
int main() {
    printf("Hello, World!\n");
    return 0;
}