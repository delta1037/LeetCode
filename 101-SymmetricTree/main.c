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
struct TreeNode* Generate(struct TreeNode* root){
    struct TreeNode* t;

    if(root->right!=NULL){
        root->right=Generate(root->right);
    }
    if(root->left!=NULL){
        root->right=Generate(root->left);
    }

    t=root->left;
    root->left=root->right;
    root->right=t;


    return root;
}
bool Judge(struct TreeNode* root1,struct TreeNode* root2){
    bool b1=false,b2=false;
    if(root1->val==root2->val){
        if(root1->left!=NULL){
            b1=Judge(root1,root2);
        }
        if(root1->right!=NULL){
            b2=Judge(root1,root2);
        }
        if(root1->right==NULL&&root1->left==NULL){
            return true;
        }
        return b1&&b2;
    }
    else{
        return false;
    }
}
bool isSymmetric(struct TreeNode* root) {

    struct TreeNode* root1=Generate(root);

    return Judge(root,root1);

}
int main() {
    printf("Hello, World!\n");
    return 0;
}