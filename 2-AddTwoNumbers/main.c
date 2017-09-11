#include <stdio.h>
#include <malloc.h>


struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int b=0;
    struct ListNode* result=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* last=result;
    last->next=NULL;

    if(l1!=NULL&&l2!=NULL){
        if((l1->val+l2->val)>9){
            last->val=(l1->val+l2->val)%10;
            b=1;
        }else{
            last->val=l1->val+l2->val;
        }
        l1=l1->next;
        l2=l2->next;

    }

    while (l1!=NULL&&l2!=NULL){
        if((l1->val+l2->val+b)>9){
            struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
            last->next=L;
            last=L;
            L->next=NULL;

            last->val=(l1->val+l2->val+b)%10;
            b=1;

        }
        else{
            struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
            last->next=L;
            last=L;
            L->next=NULL;

            L->val=l1->val+l2->val+b;
            b=0;
        }

        l1=l1->next;
        l2=l2->next;
    }

    while (l1!=NULL){
        if((l1->val+b)>9){
            struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
            last->next=L;
            last=L;
            L->next=NULL;

            last->val=(l1->val+b)%10;
            b=1;

        }
        else{
            struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
            last->next=L;
            last=L;
            L->next=NULL;

            L->val=l1->val+b;
            b=0;
        }

        l1=l1->next;
    }

    while (l2!=NULL){
        if((l2->val+b)>9){
            struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
            last->next=L;
            last=L;
            L->next=NULL;

            last->val=(l2->val+b)%10;
            b=1;

        }
        else{
            struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
            last->next=L;
            last=L;
            L->next=NULL;

            L->val=l2->val+b;
            b=0;
        }

        l2=l2->next;
    }
    if(b==1){
        struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
        last->next=L;
        L->next=NULL;
        L->val=b;

    }
    return result;
}
struct ListNode* build(struct ListNode* L, int i){
    L=(struct ListNode*)malloc(sizeof(struct ListNode));
    L->val=i;
    L->next=NULL;
    return L;
}
int main() {
    struct ListNode *l1 = NULL;
    l1=build(l1,0);

    struct ListNode *l2 = NULL;
    l2=build(l2,1);

    struct ListNode* result;

    result=addTwoNumbers(l1,l2);
    while (result!=NULL){
        printf("%d",result->val);
        result=result->next;
    }
    return 0;
}