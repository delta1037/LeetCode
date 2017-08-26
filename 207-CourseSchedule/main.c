#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

bool canFinish(int numCourses, int **prerequisites, int prerequisitesRowSize);

int main() {
    bool b;
    int numCourses =2;

    int** prerequisites;
    prerequisites=(int**)malloc(sizeof(int*)*2);
    for(int i=0;i<2;i++){
        prerequisites[i]=(int*)malloc(sizeof(int)*2);
    }
    prerequisites[0][0]=0;
    prerequisites[0][1]=1;
    prerequisites[1][0]=1;
    prerequisites[1][1]=0;

    int prerequisitesRowSize=2;

    b= canFinish(numCourses, prerequisites, prerequisitesRowSize);
    printf("%d",b);
    return 0;
}

bool canFinish(int numCourses, int **prerequisites, int prerequisitesRowSize) {
    bool canfinish=true;
    int indegree[numCourses];
    int i,j,k;
    int **matrix;
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
        indegree[prerequisites[i][1]] ++;
        matrix[prerequisites[i][0]][prerequisites[i][1]] = 1;
    }

    for (i = 0; i < numCourses; i ++) {
        for (j = 0; j < numCourses; j ++) {
            if (indegree[j] == 0) {  //选择一个入度为0的顶点并输出之
                indegree[j] --;
                for (k = 0; k < numCourses; k ++) {
                    if (matrix[j][k] == 1) {
                        indegree[k] --;  //从网中删除此顶点及所有出边
                        matrix[j][k] = 0;
                    }
                }
                break;
            }
        }
    }

    for(i = 0; i < numCourses; i ++) {
        if (indegree[i] > 0) {
            canfinish = false;
            break;
        }
    }

    return canfinish;
}