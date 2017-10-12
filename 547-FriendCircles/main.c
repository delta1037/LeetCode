#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

int findCircleNum(int** M, int MRowSize, int MColSize) {
    int n = MRowSize, res = 0;
    bool* visited=(bool*)malloc(n* sizeof(bool));
    int =queue
    for (int i = 0; i < n; ++i) {
        if (visited[i]) continue;
        q.push(i);
        while (!q.empty()) {
            int t = q.front(); q.pop();
            visited[t] = true;
            for (int j = 0; j < n; ++j) {
                if (!M[t][j] || visited[j]) continue;
                q.push(j);
            }
        }
        ++res;
    }
    return res;




}
int main() {
    printf("Hello, World!\n");
    return 0;
}