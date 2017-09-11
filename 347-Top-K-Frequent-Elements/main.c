#include <stdio.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    int* result;
    int a[numsSize][2];
    int i;

    for(i=0;i<numsSize;i++){
        a[i][0]=0;
        a[i][1]=0;


    }

    for(i=0;i<numsSize;i++){
        //nums[i]
    }


}

int main() {
    int returnSize;
    int* result;
    int num[6]={1,1,1,2,2,3};
    result=topKFrequent(num,6,2,&returnSize);
    for(int i=0;i<returnSize;i++){
        printf("%d\t",result[i]);
    }
    return 0;
}