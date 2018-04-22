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

}
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
  if(head==NULL||head->next==NULL||k==0){
    return head;
  }

  int i=0;
  struct ListNode* lasthead;
  struct ListNode* newHead;
  struct ListNode* nextHead;

  lasthead=head;
  newHead=head->next;
  head->next=NULL;

  while(newHead&&i<k){
    nextHead=newHead->next;
    newHead->next=lasthead;
    lasthead=newHead;
    newHead=nextHead;
    i++;
  }
  head->next=newHead;

  return newHead;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}