#include <stdio.h>
#include <malloc.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* reverseKGroup(struct ListNode* head, int k) {
  if(!head){
    return head;
  }
  int L=0,i=0,j=0;
  struct ListNode* t=head;
  struct ListNode* t1;
  int* nums=(int*)malloc(k* sizeof(int));
  while(t){
    L++;
    t=t->next;
  }
  t=head;
  i=i+k;
  while(i<=L){
    t1=t;
    for(j=0;j<k&&t;j++){
      nums[j]=t->val;
      t=t->next;
    }
    t=t1;
    for(j=k-1;j>=0&&t;j--){
      t->val=nums[j];
      t=t->next;
    }
    i=i+k;
  }
  return head;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}