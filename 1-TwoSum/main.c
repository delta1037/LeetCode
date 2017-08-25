#include <stdio.h>
#include <malloc.h>

int* twoSum(int* nums, int numsSize, int target);

int main() {
    int nums[3]={2,3,8};
    int* indice;

    indice=twoSum(nums,3,5);

    printf("%d-%d",indice[0],indice[1]);
    return 0;
}
int* twoSum(int* nums, int numsSize, int target) {
    int min = 2147483647;
    int i = 0;

    //找到最小值
    for (i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
    }

    //控制范围
    int max = target - min;

    int len = max - min + 1;
    int *table = (int*)malloc(len*sizeof(int));

    int *indice = (int*)malloc(2*sizeof(int));

    //赋tag
    for (i = 0; i < len; i++) {
        table[i] = -1;
    }

    for (i = 0; i < numsSize; i++) {
        if (nums[i]-min < len) {
            if (table[target-nums[i]-min] != -1) {
                indice[0] = table[target-nums[i] - min];
                indice[1] = i;
                return indice;
            }
            table[nums[i]-min] = i;
        }
    }

    free(table);

    return indice;
}