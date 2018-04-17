#include <stdio.h>
int pivotIndex(int* nums, int numsSize) {
  int i=0,rightSum=0,leftSum=0;
  for(i=0;i<numsSize;i++){
    rightSum+=nums[i];
  }
  for(i=0;i<numsSize;i++){
    rightSum-=nums[i];
    if(leftSum==rightSum){
      return i;
    }
    leftSum+=nums[i];
  }
  return -1;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}