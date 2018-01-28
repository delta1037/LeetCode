#include <stdio.h>
#include <malloc.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int *re=(int*)malloc(2*sizeof(int));
    re[0]=-1;
    re[1]=-1;
    *returnSize=2;

    int first=0,last=numsSize-1;
    int mid=first+(last-first)/2;

    if(target<nums[0]||target>nums[last]){
        return re;
    }

    while(first<=last){
        mid=first+(last-first)/2;
        if(nums[mid]>target){
            last=mid-1;
        }else if(nums[mid]<target){
            first=mid+1;
        }else{
            break;
        }
    }

    if(nums[mid]==target){
        last=mid+1;
        first=mid-1;
        re[0]=re[1]=mid;

        while((last<numsSize||first>=0)&&(nums[last]==target||nums[first]==target)){
            //printf("%d-%d\n",re[0],re[1]);
            //printf("%d-%d\n",first,last);

            if(last<numsSize&&nums[last]==target){
                re[1]=last;
            }
            if(first>-1&&nums[first]==target){
                re[0]=first;
            }
            last<numsSize? last++:1;
            first>=0? first--:1;
        }

        return re;
    }

    return re;
}

int main() {
    int *re=(int*)malloc(2*sizeof(int));
    int size=0;
    int nums[5]={0,0,1,2,2};
    re=searchRange(nums,5,0,&size);

    printf("%d-%d",re[0],re[1]);

    return 0;
}