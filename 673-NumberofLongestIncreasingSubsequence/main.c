#include <stdio.h>

int findNumberOfLIS(int* nums, int numsSize) {
    if(numsSize==0){
        return 0;
    }
    int i,j;
    int dp[numsSize];
    dp[0]=1;
    int result=1,max=1;
    int max_num=nums[0];
    int min_num=nums[0];

    for(i=1;i<numsSize;i++){
        if(nums[i]>max_num){
            max_num=nums[i];
            result++;
        }

    }

    return result;
}
int main() {
    int num[5]={1,3,5,4,7};
    int max;
    max=findNumberOfLIS(num,5);
    printf("%d",max);
    return 0;
}