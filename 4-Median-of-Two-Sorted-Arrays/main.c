#include <stdio.h>
#include <malloc.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {

    int sum=nums1Size+nums2Size;
    int medium=sum/2;
    int i=0,j=0,k=0;

    int* array=(int*)malloc(sum* sizeof(int));

    while(k!=medium+1&&(i<nums1Size||j<nums2Size)){
        if((nums1[i]<nums2[j]&&i<nums1Size)||j==nums2Size){
            array[k]=nums1[i];
            i++;
            k++;
        }
        else{
            array[k]=nums2[j];
            j++;
            k++;
        }
    }

    if(sum%2==0){
        return ((double)array[medium]+(double)array[medium+1])/2;
    }else{
        return (double)array[medium];
    }
}
int main() {
    //奇数个数字，就找到medium+1位；偶数个数字，就找到medium和medium+1位
    printf("Hello, World!\n");
    return 0;
}