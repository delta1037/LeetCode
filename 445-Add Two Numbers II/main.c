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
int addNums(int* num1,int* num2,int m,int n){
  int yu=0;
  while(m>0){
    if(n<0){
      num1[m]=(num1[m]+yu)%10;
      yu=(num1[m]+yu)/10;
      m--;
    } else{
      num1[m]=(num1[m]+num2[n]+yu)%10;
      yu=(num1[m]+num2[n])/10;
      m--;n--;
    }
  }
  return yu;
}
struct ListNode* Result(struct ListNode* l1,int* nums,int yu){
  struct ListNode* t1=l1;
  int i=0;
  if(yu!=0){
    struct ListNode* Fir=(struct ListNode*)malloc(sizeof(struct ListNode));
    Fir->next=l1;
    Fir->val=yu;
    t1=l1;
    i=0;
    while (t1){
      t1->val=nums[i];
      t1=t1->next;
      i++;
    }
    return Fir;
  } else{
    t1=l1;
    i=0;
    while (t1){
      t1->val=nums[i];
      t1=t1->next;
      i++;
    }
    return l1;
  }
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
  struct ListNode* t1=l1;
  struct ListNode* t2=l2;
  int m=0,n=0;
  int i;
  while(t1){
    t1=t1->next;
    m++;
  }
  while(t2){
    t2=t2->next;
    n++;
  }
  int* num1=(int*)malloc(m* sizeof(int));
  int* num2=(int*)malloc(n* sizeof(int));
  for(i=0,t1=l1;t1!=NULL;i++){
    num1[i]=t1->val;
    t1=t1->next;
  }
  for(i=0,t2=l2;t2!=NULL;i++){
    num2[i]=t2->val;
    t2=t2->next;
  }

  int yu=0;

  if(m>n){
    yu=addNums(num1,num2,m,n);
    return Result(l1,num1,yu);
  }else{
    yu=addNums(num2,num1,n,m);
    return Result(l2,num2,yu);
  }
  return NULL;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}