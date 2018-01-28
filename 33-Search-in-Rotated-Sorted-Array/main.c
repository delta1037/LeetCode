#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    if(numsSize==0){
        return -1;
    }

    int first=0,last=numsSize-1;
    int medium=(first+last)/2;
    while(first<=last&&nums[medium]!=target){
        medium=(first+last)/2;

        if(nums[medium]<nums[last]){
            if(target>nums[medium]&&target<=nums[last]){
                first=medium+1;
            }else{
                last=medium-1;
            }
        }else{
            if(target>=nums[first]&&target<nums[medium]){
                last=medium-1;
            }else{
                first=medium+1;
            }
        }
    }
    if(nums[medium]==target){
        return medium;
    }else{
        return -1;
    }
}

int main() {
    //二叉搜索
    int nums[7]={5,6,7,1,2,3,4};
    int re=search(nums,7,4);
    printf("%d\n",re);
    return 0;
}