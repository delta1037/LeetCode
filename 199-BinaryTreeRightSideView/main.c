#include <stdio.h>
#include <malloc.h>
struct TreeNode {
         int val;
         struct TreeNode *left;
         struct TreeNode *right;
};
int* rightSideView(struct TreeNode* root, int* returnSize);

int main() {
    printf("Hello, World!\n");
    return 0;
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rightSideView(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    int i=0,j=0;
    int t=1;
    int Queue[1000][2];

    for(int s=0;s<1000;s++){
        Queue[s][0]=0;
    }
    struct TreeNode* Queue_t[1000];
    int *result=(int*)malloc(100*sizeof(int));
    //i是队首,j是队末,添加元素i++,删除元素j--
    if(root!=NULL){
        Queue_t[i]=root;
        Queue[i][0]=t;
        Queue[i][1]=root->val;
        i++;
    }else{
        *returnSize=0;
        return result;
    }
    while(i>j){
        if(Queue_t[j]->left!=NULL){
            Queue_t[i]=Queue_t[j]->left;
            Queue[i][0]=Queue[j][0]+1;
            Queue[i][1]=Queue_t[j]->left->val;
            i++;
        }
        if(Queue_t[j]->right!=NULL){
            Queue_t[i]=Queue_t[j]->right;
            Queue[i][0]=Queue[j][0]+1;
            Queue[i][1]=Queue_t[j]->right->val;
            i++;
        }
        if(Queue[j][0]!=Queue[j+1][0]){
            result[*returnSize]=Queue[j][1];
            (*returnSize)++;
        }
        j--;
    }
    return result;
}
