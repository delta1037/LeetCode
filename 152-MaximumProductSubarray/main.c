#include <stdio.h>
#include <limits.h>

/**
 * 题解：
 * 数组中可能有奇数个负数或者偶数个奇数
 * 当有偶数个负数时，全部相乘，
 * 当有奇数个负数时，用前乘和后乘来判断要舍去哪个奇数
 */
int max(int a,int b){
    return a>b? a:b;
}
int maxProduct(int* nums, int numsSize) {

    int frontProduct = 1;
    int backProduct = 1;
    int ans = INT_MIN;

    for (int i = 0; i < numsSize; ++i) {
        frontProduct *= nums[i];
        backProduct *= nums[numsSize-i-1];

        ans = max(ans,max(frontProduct,backProduct));

        frontProduct = frontProduct == 0 ? 1 : frontProduct;
        backProduct = backProduct == 0 ? 1 : backProduct;
    }

    return ans;
}

int main() {
    int max;
    int num[4]={2,3,-2,4};
    max=maxProduct(num,4);
    printf("%d",max);
    return 0;
}