#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

void dfs(int** M,bool* visited,int i,int MColSize){
    int j;
    for(j=0;j<MColSize;j++){
        if(M[i][j]==1&&(!visited[j])){
            visited[j]=true;
            dfs(M,visited,j,MColSize);
        }
    }
}
int findCircleNum(int** M, int MRowSize, int MColSize) {
    int i;
    int sum=0;
    bool* visited=(bool*)malloc(MColSize* sizeof(bool));

    for(i=0;i<MColSize;i++){
        visited[i]=false;
    }

    for(i=0;i<MColSize;i++){
        if(!visited[i]){
            dfs(M,visited,i,MColSize);
            sum++;
        }

    }

    return sum;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}