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
  vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    string item;
    dfs(root,item,ans);
    return ans;
  }
  void dfs(TreeNode* root,string& item,vector<string>& ans){
    if(!root) return;
    string before=item;
    item+=to_string(root->val);
    if(!root->left&&!root->right){
      ans.push_back(item);
    }
    item+="->";
    dfs(root->left,item,ans);
    dfs(root->right,item,ans);
    item=before;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}