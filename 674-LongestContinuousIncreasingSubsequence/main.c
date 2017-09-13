#include <stdio.h>

int findLengthOfLCIS(int* nums, int numsSize) {
    if(numsSize==0){
        return 0;
    }
    int dp[numsSize];
    dp[0]=1;
    int max=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]>nums[i-1]){
            dp[i]=dp[i-1]+1;
            max=(dp[i]>max? dp[i]:max);
        }else{
            dp[i]=1;
        }
    }
    return max;
}

int main() {
    int num[5]={1,3,5,4,7};
    int max;
    max=findLengthOfLCIS(num,5);
    printf("%d",max);
    return 0;
}