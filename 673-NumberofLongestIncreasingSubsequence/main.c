#include <stdio.h>

int findNumberOfLIS(int* nums, int numsSize) {
    if(numsSize==0){
        return 0;
    }
    int result=0;
    int i,j,max=1;
    int dp[numsSize];
    dp[0]=1;
    int length[numsSize];
    length[0]=1;
    for(i=1;i<numsSize;i++){
        dp[i]=1;length[i]=1;
        for(j=0;j<i;j++){
            if(nums[i]>nums[j]){
                if(dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    length[i]=length[j];
                }else if(dp[i]==dp[j]+1){
                    length[i]+=length[j];
                }
            }
        }
        max=max>dp[i]? max:dp[i];


    }

    //printf("re=%d\n",result);
    for(i=max-1;i<numsSize;i++){
        if(dp[i]==max){
            result+=length[i];
        }
    }

    return result;

}
int main() {
    int num[5]={1,1,1,1,1};
    int max;
    max=findNumberOfLIS(num,5);
    printf("%d",max);
    return 0;
}