#include <stdio.h>
#include <stdlib.h>
int firstMissingPositive(int* nums, int numsSize) {
  int i=0;
  int index;
  int size=0;
  for(i=0;i<numsSize;i++){
    if(nums[i]>0) {
      index = nums[i] - 1;
      if (nums[index] > 0) {
        nums[index] = -nums[index];
      }
    }
  }

  for(i=0,index=0;i<numsSize;i++){
    if(nums[i]>0){
      return i+1;
    }
  }
  return 0;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}