#include <stdio.h>
#include <stdbool.h>
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
int main() {
    printf("Hello, World!\n");
    return 0;
}
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** updateMatrix(int** matrix, int matrixRowSize, int matrixColSize, int** columnSizes, int* returnSize) {
    //首先复制整个数组并将所有的o入队
    //等入队完毕之后开始出对，终结条件为队列为空
    //出队时，将该元素周围所有的1入队并更改其值
    //队为空数组完成
    int Queue[10000][3];

}
