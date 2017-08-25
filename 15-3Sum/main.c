#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

int** threeSum(int* nums, int numsSize, int* returnSize);
void QuickSort(int* arr,int left,int right);
int partion(int* arr,int left,int right);

int main() {
    int nums[15]={-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
    //[[-4,-2,6],[-4,0,4],[-4,1,3],[-4,2,2],[-2,-2,4],[-2,0,2]]
    int returnsize=0;
    int** result;

    result=threeSum(nums,15,&returnsize);
    for(int i=0;i<returnsize;i++){
        for(int j=0;j<3;j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int **threeSum(int *nums, int numsSize, int *returnSize) {
    int i,k,j;
    int left;
    int right;
    bool b;

    int n=numsSize*(numsSize-1)*(numsSize-2)/6;
    int** res=(int**)malloc(n*sizeof(int*));

    *returnSize=0;

    if(numsSize<3){
        return res;
    }

    QuickSort(nums,0,numsSize-1);

    for(i=0;i<numsSize-2;i++){
        if(nums[i]>0){
            break;
        }
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        left=i+1;
        right=numsSize-1;
        while (left<right){

            if((nums[i]+nums[left]+nums[right])==0){
                if(*returnSize>0&&res[*returnSize-1][1]==nums[left]&&res[*returnSize-1][2]==nums[right]){
                    left++;
                    right--;
                }
                else{
                    res[*returnSize]=(int*)malloc(3*sizeof(int));
                    res[*returnSize][0]=nums[i];
                    res[*returnSize][1]=nums[left];
                    res[*returnSize][2]=nums[right];

                    (*returnSize)++;
                    left++;
                    right--;

                }
            }
            else if((nums[i]+nums[left]+nums[right])>0){
                right--;
            }
            else if((nums[i]+nums[left]+nums[right])<0){
                left++;
            }
        }

    }

    return res;

}
void QuickSort(int* arr,int left,int right){
    int result;

    result=partion(arr,left,right);

    if((result-1)>left){
        QuickSort(arr,left,result-1);
    }
    if((result+1)<right){
        QuickSort(arr,result+1,right);
    }

}
int partion(int* arr,int left,int right){

    int biao=arr[left];
    int z=left;
    int b=1;
    while(left!=right){
        if(b==1){
            while(arr[right]>=biao&&right>left){
                right--;
            }
            arr[z]=arr[right];
            z=right;
            b=0;
        }
        else{
            while(arr[left]<=biao&&left<right){
                left++;
            }
            arr[z]=arr[left];
            z=left;
            b=1;
        }
    }
    arr[left]=biao;
    return left;
}