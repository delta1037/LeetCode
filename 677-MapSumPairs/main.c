#include <stdio.h>
#include <malloc.h>

typedef struct {
    char** str;
    int* val;
} MapSum;

/** Initialize your data structure here. */
MapSum* mapSumCreate() {
    MapSum* obj = NULL;
    obj->val=(int*)malloc(1000* sizeof(int));
    obj->str=(char**)malloc(1000*sizeof(char*));
    for(int i=0;i<1000;i++){
        obj->str[i]=(char*)malloc(100* sizeof(char));
    }
    return obj;

}

void mapSumInsert(MapSum* obj, char* key, int val) {

}

int mapSumSum(MapSum* obj, char* prefix) {

}

void mapSumFree(MapSum* obj) {

}

/**
 * Your MapSum struct will be instantiated and called as such:
 * struct MapSum* obj = mapSumCreate();
 * mapSumInsert(obj, key, val);
 * int param_2 = mapSumSum(obj, prefix);
 * mapSumFree(obj);
 */
int main() {
    struct MapSum* obj = mapSumCreate();
    mapSumInsert(obj, key, val);
    mapSumFree(obj);
    return 0;
}