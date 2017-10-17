#include <stdio.h>


//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL){
        return NULL;
    }
    struct ListNode* result;
    while (head->val==val){
        head=head->next;
    }
    result=head;

    while (head->next!=NULL){
        if(head->next->val==val){
            head->next=head->next->next;
        }
        else{
            head=head->next;
        }
    }
    return result;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}