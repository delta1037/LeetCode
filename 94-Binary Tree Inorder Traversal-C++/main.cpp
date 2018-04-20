#include <iostream>
#include <vector>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> result;
      TreeNode *buf;
      while (root){
        if(root->left){
          buf=root->left;
          while (buf->right){
            buf=buf->right;
          }
          buf->right=root;
          buf=root->left;
          root->left=NULL;
          root=buf;
        }else{
          result.push_back(root->val);
          root=root->right;
        }
      }
      return result;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}