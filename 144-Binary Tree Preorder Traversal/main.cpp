#include <iostream>
#include <vector>
#include <deque>
#include <stack>

using namespace std;

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
    void helper(TreeNode* root,vector<int>& res){
      if(!root){
        return;
      }
      res.push_back(root->val);
      if(root->left){
        helper(root->left,res);
      }
      if(root->right){
        helper(root->right,res);
      }
    }
    vector<int> preorderTraversal(TreeNode* root) {
      vector<int> array;
      helper(root,array);
      return array;
    }
};
int main() {
  TreeNode* l0=(TreeNode*)malloc(sizeof(TreeNode));
  TreeNode *l1=(TreeNode*)malloc(sizeof(TreeNode));
  TreeNode *l2=(TreeNode*)malloc(sizeof(TreeNode));
  TreeNode *l3=(TreeNode*)malloc(sizeof(TreeNode));
  TreeNode *l4=(TreeNode*)malloc(sizeof(TreeNode));

  l0->left=l1;
  l0->right=l2;
  l1->left=l3;
  l1->right=l4;

  l0->val=1;
  l1->val=2;
  l2->val=3;
  l3->val=4;
  l4->val=5;

  Solution s;
  vector<int> result;

  result=s.preorderTraversal(l0);
  for(int i=0;i<result.size();i++){
    printf("%d\n",result[i]);
  }
  return 0;
}