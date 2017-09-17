#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int sum=nums[0];
    if(numsSize<2){
        return nums[0];
    }
    int i,j;
    int sum1=nums[numsSize-1];
    for(i=1,j=numsSize-2;i<j;i++,j--){
        sum=sum^nums[i];
        sum1=sum1^nums[j];
    }
    sum=sum^sum1;
    if(i==j){
        sum=sum^nums[i];
    }
    return sum;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}