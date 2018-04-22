#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};
int height(struct TreeNode* root){
  if(root==NULL){
    return 0;
  }
  int L=height(root->left);
  int R=height(root->right);
  if(L>R){
    return L+1;
  }
  return R+1;
}
bool isBalanced(struct TreeNode* root) {
  if(root==NULL){
    return true;
  }
  return abs(height(root->right)-height(root->left))<2&&isBalanced(root->left)&&isBalanced(root->right);
}
int main() {
  printf("Hello, World!\n");
  return 0;
}