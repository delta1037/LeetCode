#include <stdio.h>

int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
  int result=0;
  int i,j;
  int t;
  for(i=0;i<numsSize;i++){
    t=nums[i];
    j=i;
    while(t<k){
      result++;
      j++;
      if(j<numsSize){
        t=t*nums[j];
      }
      else{
        break;
      }
    }
  }


  return result;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}