#include <stdio.h>
#include <stdbool.h>

bool hasCycle(struct ListNode *head);
struct ListNode {
    int val;
    struct ListNode *next;
};
int main() {

    return 0;
}

//建立链表

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    if(head!=NULL){
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            if(slow->val==fast->val){
                return true;
            }
            slow=slow->next;
        }
    }
    return false;
}