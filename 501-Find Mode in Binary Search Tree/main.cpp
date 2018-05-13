#include <iostream>
#include <vector>
#include <stack>

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
//待修改
class Solution {
 public:
  vector<int> findMode(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode* p=root;
    vector<int> nums;
    while(p!= nullptr ||!s.empty()) {
      while(p!= nullptr) {
        s.push(p);
        p=p->left;
      }
      if(!s.empty()){
        p=s.top();
        nums.push_back(p->val);
        s.pop();
        p=p->right;
      }
    }
    for(int i=0;i<nums.size();i++){

    }
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}