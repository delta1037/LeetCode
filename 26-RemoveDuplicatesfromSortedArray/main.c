#include <stdio.h>


int removeDuplicates(int* nums, int numsSize) {
    int i;
    int k=0;

    for(i=1;i<numsSize;i++){
        if(nums[i] ==nums[i-1] ){
            k++;
            continue;
        }
        nums[i-k]=nums[i];
    }

    return numsSize-k;

}

int main() {
    int num[5]={3,2,2,3,1};
    int result=removeDuplicates(num,5);
    printf("%d",result);
    return 0;
}