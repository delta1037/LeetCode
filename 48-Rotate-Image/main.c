#include <stdio.h>

void swap(int *a,int *b){
    int t;

    t=*a;
    *a=*b;
    *b=t;
}

void rotate(int** matrix, int matrixRowSize, int matrixColSize) {
    int a=0,b=matrixRowSize-1;
    int i,j;
    while(a<b){
        for(i=0;i<b-a;i++){
            swap(&matrix[a][a+i],&matrix[a+i][b]);
            swap(&matrix[a][a+i],&matrix[b][b-i]);
            swap(&matrix[a][a+i],&matrix[b-i][a]);
        }
        a++;
        b--;
    }
}
int main() {
    printf("Hello, World!\n");
    return 0;
}