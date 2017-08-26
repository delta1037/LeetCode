#include <stdio.h>
#include <malloc.h>

int* findOrder(int numCourses, int** prerequisites, int prerequisitesRowSize, int prerequisitesColSize, int* returnSize);

int main() {
    findOrder();
    return 0;
}
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findOrder(int numCourses, int** prerequisites, int prerequisitesRowSize, int prerequisitesColSize, int* returnSize) {
    int indegree[numCourses];
    int i,j,k;
    int **matrix;
    int *result=(int*)malloc(numCourses* sizeof(int));
    *returnSize=0;
    //二维数组malloc
    matrix=(int**)malloc(numCourses*sizeof(int*));

    //初始化
    for(i=0;i<numCourses;i++){
        indegree[i]=0;
        matrix[i]=(int*)malloc(numCourses* sizeof(int));
        for(j=0;j<numCourses;j++){
            matrix[i][j]=0;
        }
    }

    //存储数据
    for (i = 0; i<prerequisitesRowSize; i ++) {
        if (matrix[prerequisites[i][0]][prerequisites[i][1]] == 1){
            continue;   //重复时就跳过
        }
        //统计入度
        indegree[prerequisites[i][0]] ++;
        matrix[prerequisites[i][0]][prerequisites[i][1]] = 1;
    }

    for (i = 0; i < numCourses; i ++) {
        for (j = 0; j < numCourses; j ++) {
            if (indegree[j] == 0) {  //选择一个入度为0的顶点并输出之
                indegree[j] --;
                result[*returnSize]=j;
                (*returnSize)++;
                for (k = 0; k < numCourses; k ++) { //从网中删除此顶点及所有出边
                    if (matrix[k][j] == 1) {
                        indegree[k] --;
                        matrix[k][j] = 0;
                    }
                }
                break;
            }
        }
    }

    for(i = 0; i < numCourses; i ++) {
        if (indegree[i] > 0) {
            *returnSize=0;
            break;
        }
    }

    return result;
}