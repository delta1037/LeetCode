#include <stdio.h>
#include <malloc.h>


int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0], curSum = nums[0];
    for(int i=1; i<numsSize; i++) {
        curSum =  curSum<=0 ? nums[i] : nums[i]+curSum;
        maxSum =maxSum>curSum? maxSum:curSum;
    }
    return maxSum;
}

int main() {
    int num[9]={-2,1,-3,4,-1,2,1,-5,4};
    int result;
    result=maxSubArray(num,9);
    printf("%d",result);
    return 0;
}