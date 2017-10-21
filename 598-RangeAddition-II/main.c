#include <stdio.h>

int maxCount(int m, int n, int** ops, int opsRowSize, int opsColSize) {
    int m1=m,n1=n;
    int i,j;
    
    for(i=0;i<opsRowSize;i++){
        if(ops[i][0]<m1){
            m1=ops[i][0];
        }
        if(ops[i][1]<n1){
            n1=ops[i][1];
        }
    }
    
    return m1*n1;
    
}
int main() {
  printf("Hello, World!\n");
  return 0;
}