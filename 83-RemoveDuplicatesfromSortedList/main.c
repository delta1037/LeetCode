#include <stdio.h>
#include <malloc.h>


// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL){
        return head;
    }

    struct ListNode* L;
    L=head;
    struct ListNode* fre;
    while (head->next!=NULL){
        if(head->val==head->next->val){
            fre=head->next;
            head->next=head->next->next;
            free(fre);
        } else{
            head=head->next;
        }
    }
    return L;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}