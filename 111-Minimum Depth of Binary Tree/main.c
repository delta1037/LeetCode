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
int minDepth(struct TreeNode* root) {
  if(root==NULL){
    return 0;
  }

  int L=minDepth(root->left);
  int R=minDepth(root->right);

  return L<R && L || !R ? 1+L : 1+R;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}