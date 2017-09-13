#include <stdio.h>
#include <malloc.h>

int maxProduct(int* nums, int numsSize) {
    int result=nums[0];
    int** matrix=(int**)malloc(numsSize*sizeof(int*));
    int i,k;

    for(i=0;i<numsSize;i++){
        matrix[i]=(int*)malloc(numsSize*sizeof(int));
        matrix[i][i]=nums[i];
        result=(result>nums[i]? result:nums[i]);
    }

    for(k=1;k<numsSize;k++){
        for(i=0;i<numsSize-k;i++){
            matrix[i][i+k]=nums[i+k]*matrix[i][i+k-1];
            if(result<=matrix[i][i+k]){
                result=matrix[i][i+k];

            }
        }
    }

    return result;
}
int main() {
    int max;
    int num[4]={2,3,-2,4};
    max=maxProduct(num,4);
    printf("%d",max);
    return 0;
}