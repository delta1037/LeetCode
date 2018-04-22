#include <stdio.h>
#include <stdlib.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
  int i=0;
  int index;
  int size=0;
  for(i=0;i<numsSize;i++){
    index=abs(nums[i])-1;
    if(nums[index]>0){
      nums[index]=-nums[index];
      size++;
    }
  }
  *returnSize=numsSize-size;
  int* result=(int*)malloc((*returnSize)*sizeof(int));
  for(i=0,index=0;i<numsSize;i++){
    if(nums[i]>0){
      result[index]=i;
      index++;
    }
  }
  return result;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}