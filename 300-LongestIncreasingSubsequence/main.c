#include <stdio.h>


int lengthOfLIS(int* nums, int numsSize) {
    int i,j;
    if(numsSize==0){
        return 0;
    }
    int dp[numsSize];
    for(i=0;i<numsSize;i++){
        dp[i]=1;
    }
    int max=0;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[j]>nums[i]&&dp[j]<dp[i]+1){
                dp[j]=dp[i]+1;
                if(max<dp[j]){
                    max=dp[j];
                }
            }
        }
    }
    return max;
}

int main() {
    int a[9]={1,3,6,7,9,4,10,5,6};
    int re;
    re=lengthOfLIS(a,9);
    printf("%d",re);
    return 0;
}