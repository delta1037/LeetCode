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

typedef  struct nodelist{//栈的节点
    int elist;
    struct nodelist *next;

}nodelist,*linknodelist;

linknodelist last;

int i=0;
int numbers[1000];

int pop(){
    int num;
    linknodelist t;
    t=last;
    last=last->next;
    num=t->elist;
    free(t);
    return num;
}
void push(struct TreeNode* L){
    linknodelist l=(linknodelist)malloc(sizeof(nodelist));
    l->elist=L->val;
    l->next=last;
    last=l;
}
void middle_travel(struct TreeNode* L){
    push(L);

    if(L->left){
        middle_travel(L->left);
    }
    numbers[i]=pop();
    i++;
    if(L->right){
        middle_travel(L->right);
    }
}
bool findTarget(struct TreeNode* root, int k) {
    int left=0;
    int right=i-1;
    middle_travel(root);
    while(left<right){
        if(numbers[left]+numbers[right]==k){
            return true;
        }
        else if(numbers[left]+numbers[right]>k){
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
    return 0;
}