#include <stdio.h>

//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* L;

    if(l1!=NULL&&l2!=NULL){

        if(l1->val<l2->val){
            L=l1;
            l1=l1->next;
        }
        else{
            L=l2;
            l2=l2->next;
        }

    }else if(l1==NULL&&l2!=NULL){

        L=l2;
        l2=l2->next;

    }else if(l1!=NULL){

        L=l1;
        l1=l1->next;

    }else{

        return l1;

    }

    struct ListNode* last=L;

    while(l1!=NULL&&l2!=NULL){
        if(l1->val<l2->val){
            last->next=l1;
            last=l1;
            l1=l1->next;
        }
        else{
            last->next=l2;
            last=l2;
            l2=l2->next;
        }
    }

    if(l1!=NULL){
        last->next=l1;
    }
    else if(l2!=NULL){
        last->next=l2;
    }

    return L;
}

int main() {
    return 0;
}