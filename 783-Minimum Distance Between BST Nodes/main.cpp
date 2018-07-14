#include <iostream>
#include <vector>
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
 using namespace std;
class Solution {
 public:
  void helper(TreeNode* root,vector<int>& res){
    if(!root){
      return;
    }
    if(root->left){
      helper(root->left,res);
    }
    res.push_back(root->val);
    if(root->right){
      helper(root->right,res);
    }
  }
  int minDiffInBST(TreeNode* root) {
    vector<int> nums;
    helper(root,nums);
    int min=nums[1]-nums[0];
    for(int i=2;i<nums.size();i++){
      if(nums[i]-nums[i-1]<min){
        min=nums[i]-nums[i-1];
      }
    }
    return min;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}