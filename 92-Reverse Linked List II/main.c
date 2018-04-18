#include <stdio.h>
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
struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
  if(head==NULL||head->next==NULL||m==n){
    return head;
  }


  int i;
  struct ListNode* head1=head;
  struct ListNode* p,q;
  for(i=1,p=NULL;i<m;i++){
    p=head1;
    head1=head1->next;
  }

  struct ListNode* lasthead;
  struct ListNode* newHead;
  struct ListNode* nextHead;

  lasthead=head1;
  newHead=head1->next;
  head1->next=NULL;

  while(newHead&&i<n){
    nextHead=newHead->next;

    newHead->next=lasthead;
    lasthead=newHead;
    newHead=nextHead;
    i++;
  }
  if(p!=NULL){
    p->next=lasthead;
  }else{
    head=lasthead;
  }
  head1->next=newHead;

  return head;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}