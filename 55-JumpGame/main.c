#include <stdio.h>
#include <stdbool.h>
bool canJump(int* nums, int numsSize);

int main() {
    int nums[1]={0};
    bool b;
    b=canJump(nums,1);
    printf("%d",b);
    return 0;
}
bool canJump(int* nums, int numsSize) {
    int footnums=0;
    for(int i=0;i<numsSize;i++){
        if(i<=footnums){
            int t=i+nums[i];
            footnums=(footnums>t? footnums:t);
        }
        else{
            return false;
        }
    }
    return footnums>=numsSize-1;
}