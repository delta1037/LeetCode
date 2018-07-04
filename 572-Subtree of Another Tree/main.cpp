#include <iostream>
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  bool isSame(TreeNode* t1, TreeNode* t2) {
    if( ! t1 && ! t2)   return true;
    if( ! t1 || ! t2)   return false;
    return t1->val == t2->val && isSame(t1->left, t2->left) && isSame(t1->right, t2->right);
  }
  bool isSubtree(TreeNode* s, TreeNode* t) {
    return isSame(s, t) || s->left && isSubtree(s->left, t) || s->right && isSubtree(s->right, t);
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}