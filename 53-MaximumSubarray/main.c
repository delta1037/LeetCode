#include <stdio.h>


int maxSubArray(int* nums, int numsSize) {
    if (numsSize==0){
        return 0;
    }

    int result=nums[0];
    int matrix[numsSize][numsSize];
    int i,k;

    for(i=0;i<numsSize;i++){
        matrix[i][i]=nums[i];
    }

    for(k=1;k<numsSize;k++){
        for(i=0;i<numsSize-k;i++){
            matrix[i][i+k]=nums[i+k]+matrix[i][i+k-1];
            if(result<matrix[i][i+k]){
                result=matrix[i][i+k];

            }
        }
    }

    return result;
}

int main() {
    int num[9]={-2,1,-3,4,-1,2,1,-5,4};
    int result;
    result=maxSubArray(num,9);
    printf("%d",result);
    return 0;
}