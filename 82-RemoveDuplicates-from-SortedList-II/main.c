#include <stdio.h>
#include <malloc.h>


//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* result=head;
    struct ListNode* last=head;

    if(head==NULL||head->next==NULL){
        return head;
    }

    head=head->next;
    //找到一个头节点
    while(head!=NULL&&last->val==head->val){
        while (head!=NULL&&head->val==last->val){
            head=head->next;
        }
        last=head;
        if(head!=NULL){
            head=head->next;
        }

    }
    result=last;

    if(head){
        last->next=deleteDuplicates(head);
    }

    return result;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}