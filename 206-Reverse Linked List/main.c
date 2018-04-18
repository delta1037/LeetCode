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
struct ListNode* reverseList(struct ListNode* head) {
  if(head==NULL||head->next==NULL){
    return head;
  }
  struct ListNode* lasthead;
  struct ListNode* newHead;
  struct ListNode* nextHead;

  lasthead=head;
  newHead=head->next;
  head->next=NULL;

  while(newHead){
    nextHead=newHead->next;

    newHead->next=lasthead;
    lasthead=newHead;
    newHead=nextHead;
  }
  return lasthead;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}