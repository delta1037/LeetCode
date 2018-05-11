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
struct ListNode* insertionSortList(struct ListNode* head) {
  if(!head||!head->next){
    return head;
  }
  struct ListNode* p=head->next;
  struct ListNode* newhead;
  struct ListNode* i=head;
  head->next=NULL;
  while (p){
    newhead=p->next;
    i=head;
    if(p->val<=head->val){
      p->next=head;
      head=p;
      p=newhead;
      continue;
    }

    while (p->val>i->val&&i->next){
      if(p->val<=i->next->val){
        p->next=i->next;
        i->next=p;
        break;
      }else{
        i=i->next;
      }
    }
    if(i->next==NULL){
      i->next=p;
      p->next=NULL;
    }
    p=newhead;
  }
  return head;
}
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}