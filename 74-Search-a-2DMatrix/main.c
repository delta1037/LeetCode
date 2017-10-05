#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int (*matrix)[4], int matrixRowSize, int matrixColSize, int target) {
    int low=0,high=matrixRowSize-1;
    int left=0,right=matrixColSize-1;
    int mid=0;
    while(low<=high&&high>=0){
        mid=low+(high-low)/2;

        if(matrix[mid][0]>target){
            high=mid-1;
        }
        else if(matrix[mid][0]==target){
            return true;
        }
        else if(matrix[mid][0]<target&&matrix[mid][right]>=target){
            break;
        }
        else{
            low=mid+1;
        }

    }
    int middle;
    while (left<=right&&right>=0){
        middle=left+(right-left)/2;

        if(matrix[mid][middle]>target){
            right=middle-1;
        }
        else if(matrix[mid][middle]==target){
            return true;
        }
        else{
            left=middle+1;
        }

    }
    return false;
}

bool find(int* num,int numsSize,int target){
    int middle;
    int left=0,right=numsSize-1;

    while (left<=right){
        middle = left + (right - left) / 2;
        printf("left-right-mid=%d-%d-%d\n",left,right,middle);
        if(num[middle]>target){
            right=middle-1;
        }
        else if(num[middle]==target){
            return true;
        }
        else{
            left=middle+1;
        }
        printf("left-right==%d-%d\n",left,right);
    }



}

int main() {
    int matrix[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    bool b;
    b=searchMatrix(matrix, 3, 4, 3);
    //int num[7]={1,4,5,6,8,9,10};
    //b=find(num,7,1);
    printf("%d",b);
    return 0;
}