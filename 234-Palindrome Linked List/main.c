#include <stdio.h>
#include <stdbool.h>

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
bool isPalindrome(struct ListNode* head) {
  if(head==NULL||head->next==NULL){
    return true;
  }
  int k=0;
  struct ListNode* head1=head;
  while(head1){
    head1=head1->next;
    k++;
  }
  struct ListNode* lasthead=head;
  struct ListNode* newHead=head->next;
  struct ListNode* nextHead;

  head->next=NULL;
  int i=0;
  while(i<k/2-1){
    nextHead=newHead->next;

    newHead->next=lasthead;
    lasthead=newHead;
    newHead=nextHead;

    i++;
  }
  if(k%2){
    newHead=newHead->next;
  }
  while(lasthead&&newHead){
    if(lasthead->val!=newHead->val){
      return false;
    }
    lasthead=lasthead->next;
    newHead=newHead->next;
  }
  return true;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}