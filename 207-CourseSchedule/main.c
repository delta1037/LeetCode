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
    matrix=(int**)malloc(numCourses*sizeof(int*));
    for(i=0;i<numCourses;i++){
        matrix[i]=(int*)malloc(numCourses* sizeof(int));
    }

    //初始化
    for(i=0;i<numCourses;i++){
        for(j=0;j<numCourses;j++){
            matrix[i][j]=0;
        }
    }
    for(i=0;i<numCourses;i++){
        indegree[i]=0;
    }
    //存储数据
    for (i = 0; i<prerequisitesRowSize; i ++) {
        if (matrix[prerequisites[i][0]][prerequisites[i][1]] == 1){
            continue;
        }
        indegree[prerequisites[i][1]] ++;
        matrix[prerequisites[i][0]][prerequisites[i][1]] = 1;
    }

    for (i = 0; i < numCourses; i ++) {
        for (j = 0; j < numCourses; j ++) {
            if (indegree[j] == 0) {
                indegree[j] --;
                for (k = 0; k < numCourses; k ++) {
                    if (matrix[j][k] == 1) {
                        indegree[k] --;
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