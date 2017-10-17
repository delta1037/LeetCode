#include <stdio.h>
#include <malloc.h>

int min(int a,int b){
    return a>b? b:a;
}
int max(int a,int b){
    return a>b? a:b;
}
int maximalSquare(char** matrix, int matrixRowSize, int matrixColSize) {
    int i,j;
    int m=0;
    if(matrix==NULL||matrixColSize==0||matrixRowSize==0){
        return 0;
    }
    int** dp=(int**)malloc((1+matrixRowSize)*sizeof(int*));
    for(i=0;i<=matrixRowSize;i++){
        dp[i]=(int*)malloc((matrixColSize+1)* sizeof(int));
    }

    for(i=1;i<=matrixRowSize;i++){
        for(j=1;j<=matrixColSize;j++){

            if (matrix[i - 1][j - 1] == '1') {
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                m = max(m, dp[i][j]);
            }

        }
    }

    return m*m;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}