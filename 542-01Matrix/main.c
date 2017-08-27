#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
/*
typedef struct Queue{
    int val;
    int i;
    int j;
    struct Queue *next;
}Queue,*QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;
*/
/*
 * void inQueue(int val,int i,int j){

}
void deQueue(){

}
bool Queue(){

}
 */
int** updateMatrix(int** matrix, int matrixRowSize, int matrixColSize, int** columnSizes, int* returnSize);

int main() {
    return 0;
}
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** updateMatrix(int** matrix, int matrixRowSize, int matrixColSize, int** columnSizes, int* returnSize) {

    int i,j;
    int front=0,rear=0;
    *returnSize=matrixRowSize;


    int t=matrixRowSize*matrixColSize;

    int **Queue=(int**)malloc(t*sizeof(int*));

    for (i = 0; i <t; i++) {
        Queue[i]=(int*)malloc(3* sizeof(int));
    }

    int **return_matrix=(int**)malloc(matrixRowSize* sizeof(int*));
    (*columnSizes)=(int*)malloc(matrixRowSize*sizeof(int));

    //首先复制整个数组并将所有的o入队
    //等入队完毕之后开始出对，终结条件为队列为空
    //出队时，将该元素周围所有的1入队并更改其值
    //队为空数组完成

    for(i=0;i<matrixRowSize;i++){
        return_matrix[i]=(int*)malloc(matrixColSize* sizeof(int));
        (*columnSizes)[i]=matrixColSize;
        for(j=0;j<matrixColSize;j++){
            return_matrix[i][j]=matrix[i][j];
            if(matrix[i][j]==0){
                matrix[i][j]=-1;
                Queue[front][0]=i;
                Queue[front][1]=j;
                Queue[front][2]=0;
                front++;
            }
        }
    }

    while(front!=rear){
        //开始出队，同时入队
        //满足条件则入队
        //找出出队的那个上下左右是否满足入队的条件，若没有超过边界，值等于1则入队
        //up
        if(Queue[rear][0]-1>=0&&return_matrix[Queue[rear][0]-1][Queue[rear][1]]==1&&matrix[Queue[rear][0]-1][Queue[rear][1]]!=-1){
            Queue[front][0]=Queue[rear][0]-1;
            Queue[front][1]=Queue[rear][1];

            Queue[front][2]=Queue[rear][2]+1;
            return_matrix[Queue[front][0]][Queue[front][1]]=Queue[front][2];
            matrix[Queue[front][0]][Queue[front][1]]=-1;
            front++;
        }
        //down
        if(Queue[rear][0]+1<matrixRowSize&&return_matrix[Queue[rear][0]+1][Queue[rear][1]]==1&&matrix[Queue[rear][0]+1][Queue[rear][1]]!=-1){
            Queue[front][0]=Queue[rear][0]+1;
            Queue[front][1]=Queue[rear][1];

            Queue[front][2]=Queue[rear][2]+1;
            return_matrix[Queue[front][0]][Queue[front][1]]=Queue[front][2];
            matrix[Queue[front][0]][Queue[front][1]]=-1;
            front++;
        }
        //right
        if(Queue[rear][1]+1<matrixColSize&&return_matrix[Queue[rear][0]][Queue[rear][1]+1]==1&&matrix[Queue[rear][0]][Queue[rear][1]+1]!=-1){
            Queue[front][0]=Queue[rear][0];
            Queue[front][1]=Queue[rear][1]+1;

            Queue[front][2]=Queue[rear][2]+1;
            return_matrix[Queue[front][0]][Queue[front][1]]=Queue[front][2];
            matrix[Queue[front][0]][Queue[front][1]]=-1;
            front++;
        }
        //left
        if(Queue[rear][1]-1>=0&&return_matrix[Queue[rear][0]][Queue[rear][1]-1]==1&&matrix[Queue[rear][0]][Queue[rear][1]-1]!=-1){
            Queue[front][0]=Queue[rear][0];
            Queue[front][1]=Queue[rear][1]-1;

            Queue[front][2]=Queue[rear][2]+1;
            return_matrix[Queue[front][0]][Queue[front][1]]=Queue[front][2];
            matrix[Queue[front][0]][Queue[front][1]]=-1;
            front++;
        }

        rear++;
    }

    return return_matrix;
}
