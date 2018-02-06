#include <stdio.h>
#include <malloc.h>

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
/*
struct ListNode* reverse(struct ListNode* head){
    if(head==NULL||head->next==NULL){
        return head;
    }

    struct ListNode *pre = head;
    struct ListNode* cur=head->next;
    struct ListNode* temp=head->next->next;

    while(cur){
        temp=cur->next;
        cur->next=pre;

        pre=cur;
        cur=temp;

    }

    head->next=NULL;
    return pre;
}
*/

struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode* L1;
    struct ListNode* L2;
    struct ListNode* p1=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p2=(struct ListNode*)malloc(sizeof(struct ListNode));
    L1=p1;
    L2=p2;

    while(head){
        if(head->val<x){
            p1=p1->next=head;
        }
        else{
            p2=p2->next=head;
        }
        head=head->next;
    }

    p2->next=NULL;
    p1->next=L2->next;

    return L1->next;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}