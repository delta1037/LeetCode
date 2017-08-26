#include <stdio.h>
#include <stdbool.h>

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

int main() {
    printf("Hello, World!\n");
    return 0;
}
int** updateMatrix(int** matrix, int matrixRowSize, int matrixColSize, int** columnSizes, int* returnSize) {
    //首先复制整个数组并将所有的o入队
    //等入队完毕之后开始出对，终结条件为队列为空
    //出队时，将该元素周围所有的1入队并更改其值
    //队为空数组完成
}
void inQueue(int val,int i,int j){

}
void deQueue(){

}
bool Queue(){

}