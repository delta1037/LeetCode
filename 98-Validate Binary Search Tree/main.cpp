#include <iostream>
#include <stack>
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
  bool isValidBST(TreeNode* root) {
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

    for(int i=1;i<nums.size();i++){
      if(nums[i-1]>nums[i]){
        return false;
      }
    }
    return true;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}