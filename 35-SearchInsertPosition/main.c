#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i=0;i<numsSize;i++){
        if(target<=nums[i]){
            break;
        }
    }

    return i;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}