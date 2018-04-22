#include <stdio.h>
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
int maxDepth(struct TreeNode* root) {
  if(root==NULL){
    return 0;
  }

  int leftnums=maxDepth(root->left);
  int rightnums=maxDepth(root->right);
  if(leftnums>rightnums){
    return leftnums+1;
  } else{
    return rightnums+1;
  }
  return 0;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}