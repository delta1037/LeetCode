#include <stdio.h>


//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL){
        return NULL;
    }

    int n=0;
    struct ListNode* L=head;
    struct ListNode* newhead;
    struct ListNode* L1;

    while (L!=NULL){
        L=L->next;
        n++;
    }

    L=head;
    k=k%n;
    n=n-k;

    if(n==0||k==0||head->next==NULL){
        return head;
    }
    while (n>1&&head!=NULL){
        head=head->next;
        n--;
    }

    newhead=head->next;
    L1=head->next;
    head->next=NULL;

    while (L1->next!=NULL){
        L1=L1->next;
    }

    L1->next=L;

    return newhead;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}