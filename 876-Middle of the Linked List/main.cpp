#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* middleNode(ListNode* head) {
      ListNode *fast=head, *slow = head;
      while (fast != nullptr && fast->next != nullptr){
          fast=fast->next->next;
          slow=slow->next;
      }
      return slow;
  }
};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}