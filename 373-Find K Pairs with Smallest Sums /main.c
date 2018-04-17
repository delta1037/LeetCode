#include <stdio.h>
#include <malloc.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
//待解决问题--严重bug
int** kSmallestPairs(int* nums1, int nums1Size, int* nums2, int nums2Size, int k, int** columnSizes, int* returnSize) {
  if(k==0||nums1Size==0||nums2Size==0){
    return NULL;
  }

  int **result=(int**)malloc(k*sizeof(int*));
  int *col=(int*)malloc(k* sizeof(int));
  *columnSizes=col;
  *returnSize=k;
  for(int i=0;i<k;i++){
    result[i]=(int*)malloc(2* sizeof(int));
    col[i]=2;
  }

  int f1=0,f2=0,t1=1,t2=1;

  result[0][0]=nums1[0];
  result[0][1]=nums2[0];

  for(int i=1;i<k&&f1<nums1Size&&f2<nums2Size;i++){
    if(nums1[f1]+nums2[t1]>nums2[f2]+nums1[t2]){
      result[i][0]=nums1[t2];
      result[i][1]=nums2[f2];
      if(f1==t2&&f2==t1){
        t1++;
        t2++;
      }else{
        t2++;
      }
    }else{
      result[i][0]=nums1[f1];
      result[i][1]=nums2[t1];
      if(f1==t2&&f2==t1){
        t1++;
        t2++;
      }else {
        t1++;
      }
    }
    if(t1==nums2Size){
      f1++;
      t1=(f2==nums2Size-1? f2:f2+1);
    }
    if(t2==nums1Size){
      f2++;
      t2=(f1==nums2Size-1? f1:f1+1);
    }
  }
  return result;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}