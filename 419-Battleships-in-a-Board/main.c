#include <stdio.h>

int countBattleships(char** board, int boardRowSize, int boardColSize) {
    int i,j;
    int sum = 0;
    for(i=0;i<boardRowSize;i++){
        for(j=0;j<boardColSize;j++){
            if(board[i][j]=='X'&&(i==boardRowSize-1||board[i+1][j]=='.')&&(j==boardColSize-1||board[i][j+1]=='.')){
                sum++;
            }
        }
    }
    return sum;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}