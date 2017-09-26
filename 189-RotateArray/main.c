#include <stdio.h>
void change(int* nums,int low,int high){
    int t;
    while (low<high){
        t=nums[low];
        nums[low]=nums[high];
        nums[high]=t;

        low++;
        high--;
    }
}
void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
    change(nums,0,numsSize-k-1);
    change(nums,numsSize-k,numsSize-1);
    change(nums,0,numsSize-1);
}
int main() {
    int num[7]={1,2,3,4,5,6,7};
    rotate(num,7,3);
    for(int i=0;i<7;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}