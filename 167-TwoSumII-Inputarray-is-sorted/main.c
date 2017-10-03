#include <stdio.h>
#include <malloc.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left=0,right=numbersSize-1;
    *returnSize=0;
    int* result=(int*)malloc(2*sizeof(int));
    while(left<right){
        if(numbers[left]+numbers[right]==target){
            result[0]=left+1;
            result[1]=right+1;
            *returnSize=2;
            return result;
        }
        else if(numbers[left]+numbers[right]>target){
            right--;
        }
        else{
            left++;
        }
    }
    return result;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}