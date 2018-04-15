#include <stdio.h>
int findMin(int* nums, int numsSize) {
  int first=0,last=numsSize-1;
  int medium;
  int result=nums[0];

  while(first<last){
    medium=(first+last)/2;
    if(nums[medium]<nums[last]){
      if(medium-1<0||nums[medium-1]>nums[medium]){
        result=nums[medium];
        break;
      }else{
        last=medium;
      }
    }else{
      if(medium==last||medium==last-1){
        result=nums[medium]>nums[last]? nums[last]:nums[medium];
        break;
      }
      first=medium;
    }
  }
  return result;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}
