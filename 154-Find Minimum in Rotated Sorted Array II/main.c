#include <stdio.h>

int findMin(int* nums, int numsSize) {
   int i;
    int k=0;

    for(i=1;i<numsSize;i++){
        if(nums[i] ==nums[i-1] ){
            k++;
            continue;
        }
        nums[i-k]=nums[i];
    }
    numsSize=numsSize-k;

    if(numsSize>1&&nums[numsSize-1]==nums[0]){
        numsSize--;
    }

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