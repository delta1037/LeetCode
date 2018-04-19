#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
  int k=0;
  for(int i=0;i<numsSize;i++){
    if(nums[i]==0){
      k++;
      continue;
    }
    nums[i-k]=nums[i];
    if(k!=0){
      nums[i]=0;
    }
  }
}
int main() {
  printf("Hello, World!\n");
  return 0;
}