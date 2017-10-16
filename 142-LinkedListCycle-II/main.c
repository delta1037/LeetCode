#include <stdio.h>


//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* fast=head;
    struct ListNode* slow=head;

    while (fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow){
            struct ListNode* slow0=head;
            while (slow0!=slow){
                slow=slow->next;
                slow0=slow0->next;
            }
            return slow;
        }
    }

    return NULL;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}