#include <stdio.h>
#include <stdlib.h>
int findPairs(int* nums, int numsSize, int k) {
  int result=0;
  int i,j;
  for(i=0;i<numsSize;i++){
    for(j=i+1;j<numsSize;j++){
      if(abs(nums[i]-nums[j])==k){
        result++;
      }
    }
  }
  return result;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}