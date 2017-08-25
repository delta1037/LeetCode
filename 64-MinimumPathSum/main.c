#include <stdio.h>
#include <malloc.h>

int minPathSum(int** grid, int gridRowSize, int gridColSize);
int main() {
    int **grid=(int**)malloc(8* sizeof(int*));
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            grid[i]=(int*)malloc(8* sizeof(int));
            grid[i][j]=i+j;
            printf("%d  ",grid[i][j]);
        }
        printf("\n");
    }
    int result=minPathSum(grid, 8, 8);
    printf("%d",result);
    return 0;
}
int minPathSum(int** grid, int gridRowSize, int gridColSize) {
    int i,j;
    for(i=0;i<gridRowSize;i++){
        for(j=0;j<gridColSize;j++){
            if(i==0&&j!=0){
                grid[i][j]=grid[i][j-1]+grid[i][j];
            }
            else if(i!=0&&j==0){
                grid[i][j]=grid[i-1][j]+grid[i][j];
            }
            else if(i>0&&j>0){
                grid[i][j] = (grid[i - 1][j] < grid[i][j - 1] ? grid[i - 1][j] : grid[i][j - 1])+grid[i][j];
            }
        }
    }
    return grid[gridRowSize-1][gridColSize-1];
}