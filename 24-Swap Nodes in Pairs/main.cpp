#include <iostream>
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
// node1->node2->node3->node4
struct ListNode* swapPairs(struct ListNode* head) {
  struct ListNode* newhead=head;
  struct ListNode* rehead;
  struct ListNode* last;
  struct ListNode* p;
  if(head&&head->next){
    newhead=head->next->next;
    head->next->next=head;
    last=head;
    rehead=head->next;
    head->next= nullptr;
  }else{
    return head;
  }
  while(newhead&&newhead->next){
    p=newhead->next->next;
    newhead->next->next=newhead;
    last->next=newhead->next;
    last=newhead;
    newhead->next= nullptr;
    newhead=p;
  }
  if(newhead){
    last->next=newhead;
  }
  return rehead;
}

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}