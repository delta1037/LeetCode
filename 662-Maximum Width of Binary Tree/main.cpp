#include <iostream>
#include <vector>
#include <deque>

using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
      if(root== nullptr){
        return 0;
      }
      int maxWith=0;
      deque<TreeNode*> que;
      que.push_back(root);
      while(!que.empty()){
        int len=que.size();
        maxWith= len>maxWith? len:maxWith;

        for(int i=0;i<len;i++){
          TreeNode* t=que.front();
          que.pop_front();
          if(t){
            que.push_back(t->left);
            que.push_back(t->right);
          } else{
            que.push_back(NULL);
            que.push_back(NULL);
          }
        }
        while(!que.empty()){
          if(que.back()==NULL){
            que.pop_back();
          }else{
            break;
          }
        }
        while (!que.empty()){
          if(que.front()==NULL){
            que.pop_front();
          }else{
            break;
          }
        }
      }
      return maxWith;
    }
};
int main() {
  //[1,1,1,1,null,null,1,1,null,null,1]
  std::cout << "Hello, World!" << std::endl;
  return 0;
}