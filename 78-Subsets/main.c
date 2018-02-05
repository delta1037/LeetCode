#include <stdio.h>
#include <malloc.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int reBiSum(int numsSize){
    int re=1;
    while(numsSize>0){
        re=re*2;
        numsSize--;
    }
    return re;
}

int** subsets(int* nums, int numsSize, int** columnSizes, int* returnSize) {
    int Bi=reBiSum(numsSize);
    int **subset=(int**)malloc(Bi*sizeof(int*));
    int *col=(int*)malloc(Bi* sizeof(int));
    *columnSizes=col;
    *returnSize=Bi;

    int i;
    int j;
    int step=1;
    int t;

    for(i=0;i<Bi;i++){
        subset[i]=(int*)malloc(numsSize* sizeof(int));
        col[i]=0;
    }

    for(i=0;i<numsSize;i++){
        for(j=Bi-1;j>-1;j=j-step){
            t=step;
            while(t>0){
                subset[j][col[j]]=nums[i];
                col[j]++;
                t--;
                j--;
            }
        }
        step=step*2;
    }

    return subset;
}

int main() {
    int nums[3]={1,2,3};
    int Bi=8;
    int returnsize;
    int **columnSizes=(int**)malloc(Bi*sizeof(int*));
    int **subset=(int**)malloc(Bi*sizeof(int*));
    for(int i=0;i<Bi;i++){
        subset[i]=(int*)malloc(3* sizeof(int));
        columnSizes[i]=(int*)malloc(sizeof(int));
        columnSizes[i][0]=0;
    }

    subset=subsets(nums,3,columnSizes,&returnsize);

    for(int i=0;i<8;i++){
        printf("%d---",columnSizes[i][0]);
        for(int j=0;j<columnSizes[i][0];j++){
            printf("%d ",subset[i][j]);
        }
        printf("\n");
    }

    return 0;
}