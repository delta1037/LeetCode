#include <stdio.h>
#include <malloc.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct Stack{
  int level;
  struct TreeNode* node;
  struct Stack *next;
  struct Stack *last;
};
struct Stack* pop(struct Stack* in){
  struct Stack* out;
  out=in->last;
  free(in->last);
  out->next=NULL;
  return out;
}
struct Stack* push(struct Stack* in,struct TreeNode* node,int lev){
  //struct Stack* out;
  struct Stack* Snode=(struct Stack*)malloc(sizeof(struct Stack));
  in->next=Snode;
  Snode->next=NULL;
  Snode->last=in;
  Snode->level=lev;
  Snode->node=node;
  return Snode;
}
//待修改,
//munmap_chunk(): invalid pointer
int** levelOrderBottom(struct TreeNode* root, int** columnSizes, int* returnSize) {
  int **result=NULL;
  int Maxcol=1;
  int t=1,i=0;

  if(root==NULL){
    return result;
  }

  struct Stack* travel;
  struct Stack* Top=(struct Stack*)malloc(sizeof(struct Stack));
  Top->level=-1;
  Top->next=NULL;
  Top->last=NULL;
  Top->node=NULL;
  Top=push(Top,root,0);
  travel=Top;

  while(travel){
    if(travel->node->right){
      Top=push(Top,travel->node->right,travel->level+1);
    }
    if(travel->node->left){
      Top=push(Top,travel->node->left,travel->level+1);
    }

    if(travel->last->level==travel->level){
      t++;
      Maxcol= t>Maxcol? t:Maxcol;
    }else{
      t=1;
    }
    travel=travel->next;
  }

  *returnSize=Top->level+1;

  result=(int**)malloc((*returnSize)*sizeof(int*));
  int *col=(int*)malloc((Maxcol)*sizeof(int));
  *columnSizes=col;
  for(i=0;i<*returnSize;i++){
    result[i]=(int*)malloc(Maxcol*sizeof(int));
    col[i]=0;
  }
  i=0;
  int thisLevel=*returnSize-1;
  while(Top->level>-1){
    if(Top->level==thisLevel) {
      result[i][col[i]] = Top->node->val;
      col[i]++;
      Top=pop(Top);
    }else {
      thisLevel--;
      i++;
    }
  }
  return result;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}