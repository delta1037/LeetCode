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
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

//very many error  ou.... i will use C++...bye...
struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};
struct Stack{
  struct Stack* next;
  struct Stack* last;
  struct TreeNode* node;
};
struct Num{
  struct Num* next;
  int val;
};
struct Stack* push(struct Stack* root,struct TreeNode* node){
  struct Stack* newNode=(struct Stack*)malloc(sizeof(struct Stack));
  newNode->last=root;
  root->next=newNode;
  newNode->next=NULL;
  newNode->node=node;
  return newNode;
}
void midTravel(struct TreeNode* root,struct Num* node,struct Stack* S){
  S=push(S,root);
  if(root->left){
    midTravel(root->left,node,S);
  }
  node->val=S->node->val;
  S=S->last;
  free(S->next);
  struct Num* newNode=(struct Num*)malloc(sizeof(struct Num));
  node->next=newNode;
  newNode->next=NULL;
  if(root->right){
    midTravel(root->right,newNode,S);
  }
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
  if(root==NULL){
    return NULL;
  }
  struct Num* head=(struct Num*)malloc(sizeof(struct Num));
  struct Num* t=head;
  struct Stack* S=(struct Stack*)malloc(sizeof(struct Stack));
  midTravel(root,head,S);
  int k=0,i=0;
  while (t){
    k++;
    t=t->next;
  }
  int* num=(int*)malloc(k* sizeof(int));
  *returnSize=k;
  while(head){
    num[i]=head->val;
    i++;
    head=head->next;
  }
  return num;
}
//不稳定的非递归版本....
/*
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
  if(root==NULL){
    return NULL;
  }
  int k=0,i=0;

  struct Num* head=(struct Num*)malloc(sizeof(struct Num));
  struct Num* t=head;
  t->next=NULL;

  struct Stack* Shead=(struct Stack*)malloc(sizeof(struct Stack));
  Shead->next=NULL;
  Shead->last=NULL;
  Shead->node=NULL;

  while (Shead->node||root){
    while (root){
      Shead=push(Shead,root);
      root=root->left;
    }
    Shead=pop(Shead);
    root=Shead->node;
    if(root){
      t->val=root->val;
      struct Num* newNum=(struct Num*)malloc(sizeof(struct Num));
      t->next=newNum;
      newNum->next=NULL;
      t=newNum;
      k++;
      root=root->right;
    }
  }
  int* num=(int*)malloc(k* sizeof(int));
  *returnSize=k;
  while(head){
    num[i]=head->val;
    i++;
    head=head->next;
  }
  return num;
}
 */
int main() {
  printf("Hello, World!\n");
  return 0;
}