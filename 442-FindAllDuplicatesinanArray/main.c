#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int* findDuplicates(int* nums, int numsSize, int* returnSize);
int main(){
    int a[5]={1,2,4,5,4};
    int i=0;
    int *result;
    result=findDuplicates(a,5,&i);
    for(int j=0;j<i;j++){
        printf("%d ",result[j]);
    }
    return 0;
}
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int *result=(int*)malloc((numsSize/2)*sizeof(int));
    int i;
    *returnSize=0;
    for(i=0;i<numsSize;i++){
        if(nums[abs(nums[i])-1]<0){
            result[*returnSize]=abs(nums[i]);
            (*returnSize)++;
        }
        else{
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
    }
    return result;
}