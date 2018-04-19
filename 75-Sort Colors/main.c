#include <stdio.h>
void sortColors(int* nums, int numsSize) {
  int m=0,n=0;
  int i;
  for(i=0;i<numsSize;i++){
    if(nums[i]==0){
      m++;
    }
    if(nums[i]==1){
      n++;
    }

  }
  for(i=0;i<m;i++){
    nums[i]=0;
  }
  for(i=m;i<m+n;i++){
    nums[i]=1;
  }
  for(i=m+n;i<numsSize;i++){
    nums[i]=2;
  }
}
int main() {
  printf("Hello, World!\n");
  return 0;
}