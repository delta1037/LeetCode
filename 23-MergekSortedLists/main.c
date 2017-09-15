#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {

    struct ListNode* L=NULL;
    struct ListNode* last;
    int i=0;
    int minNum=INT16_MAX;
    int minIndex=-1;

    while(i<listsSize){
        if(lists[i]!=NULL&&minNum>lists[i]->val){
            minIndex=i;
        }
        i++;
    }

    if(minIndex!=-1){
        L=lists[minIndex];
        lists[minIndex]=lists[minIndex]->next;
        last=L;
    }else{
        return NULL;
    }

    while(1){
        i=0;
        minNum=INT16_MAX;
        minIndex=-1;

        while(i<listsSize){
            if(lists[i]!=NULL&&minNum>lists[i]->val){
                minIndex=i;
            }
            i++;
        }

        if(minIndex==-1){
            last->next=lists[minIndex];
            lists[minIndex]=lists[minIndex]->next;

        }else{
            return L;
        }

    }
}
int main() {
    printf("Hello, World!\n");
    return 0;
}