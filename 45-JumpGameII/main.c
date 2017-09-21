#include <stdio.h>
#include <stdint.h>


int jump(int* nums, int numsSize) {
    if(numsSize==0){
        return 0;
    }

    int i;
    int j;

    int dp[numsSize];
    dp[0]=1;
    for(i=1;i<numsSize;i++){
        dp[i]=INT16_MAX;
    }

    for(i=0;i<numsSize;i++){
        for(j=i;j<=i+nums[i]&&j<numsSize;j++){
            if(dp[j]>dp[i]+1){
                dp[j]=dp[i]+1;
            }
        }
    }

    return dp[numsSize-1];

}
int main() {
    printf("Hello, World!\n");
    return 0;
}