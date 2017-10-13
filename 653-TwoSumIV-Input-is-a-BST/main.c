#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

/**
 * Definition for a binary tree node.
 */

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int i=0;
int nums[10000];

void middle_travel(struct TreeNode* root){
    if(root==NULL){
        return;
    }

    middle_travel(root->left);
    nums[i]=root->val;
    i++;
    middle_travel(root->right);
}
bool findTarget(struct TreeNode* root, int k) {
    if(root==NULL){
        return false;
    }

    middle_travel(root);

    int left=0,right=i;

    while(left<right){
        if(nums[left]+nums[right]==k){
            return true;
        }
        else if(nums[left]+nums[right]>k){
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}
int main() {
    printf("Hello, World!\n");
    //[0,-1,2,-3,null,null,4]
    //-4
    return 0;
}