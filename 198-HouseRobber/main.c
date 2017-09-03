#include <stdio.h>

int rob(int* nums, int numsSize) {
    int i;

    int t=0;
    int m;
    if(numsSize<=1){
        return numsSize==0? 0:nums[1];
    }

    int dp[numsSize];

    dp[0]=nums[0];
    dp[1]=nums[1];
    t=dp[0]>dp[1]? dp[0]:dp[1];

    m=dp[0];

    for(i=2;i<numsSize;i++){
        dp[i]=(dp[i-1]>=(nums[i]+m)? dp[i-1]:m+nums[i]);
        m=m>dp[i-1]? m:dp[i-1];
        t=dp[i];
    }

    return t;
}
int main() {
    int a[4]={2,1,1,2};
    int re;
    re=rob(a,4);
    printf("%d",re);
    return 0;
}