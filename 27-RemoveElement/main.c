#include <stdio.h>


int removeElement(int* nums, int numsSize, int val) {
    int i;
    int k=0;

    for(i=0;i<numsSize;i++){
        if(nums[i] == val){
            k++;
            continue;
        }
        nums[i-k]=nums[i];
    }

    return numsSize-k;

}

int main() {
    int num[5]={3,2,2,3,1};
    int result=removeElement(num,5,3);
    printf("%d",result);
    return 0;
}