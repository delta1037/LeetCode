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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
      vector<int> step;
      vector<int> node;
      int j=0;
      int i;
      findStep(root,target,step);
      int stepSize=step.size();
      for(j=0;j<stepSize;j++){
        i=K-stepSize+j;
        if(i<0){
          if(step[j]==0){
            root=root->left;
          }else{
            root=root->right;
          }
          continue;
        } else if(i==0){
          node.push_back(root->val);
        }else{
          if(j+1<stepSize&&step[j+1]==0){
            findNode(root->right,i-1,node);
          }else if(j+1<stepSize&&step[j+1]==1){
            findNode(root->left,i-1,node);
          } else{
            findNode(root,i,node);
          }

          if(step[j]==0){
            root=root->left;
          }else{
            root=root->right;
          }
        }
      }
      return node;
    }
    void findNode(TreeNode* root,int k,vector<int> &node){
      if(k==0){
        node.push_back(root->val);
        return;
      }else if(root->left){
        findNode(root->left,k-1,node);
      }else if(root->right){
        findNode(root->right,k-1,node);
      }
    }
    bool findStep(TreeNode* root, TreeNode* target,vector<int> &step){
      bool l,r;
      if(root==target){
        return true;
      }
      if(root->left!= nullptr){
        step.push_back(0);
        l=findStep(root->left,target,step);
        if(!l){
          step.pop_back();
        }
      }
      if(!l&&root->right!= nullptr){
        step.push_back(0);
        r=findStep(root->right,target,step);
        if(!r){
          step.pop_back();
        }
      }
      return true;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}