#include <stdio.h>
#include <stdbool.h>

typedef struct {
    long right;
    long left;
    typedef struct
} RangeModule;

RangeModule* rangeModuleCreate() {

}

void rangeModuleAddRange(RangeModule* obj, int left, int right) {

}

bool rangeModuleQueryRange(RangeModule* obj, int left, int right) {

}

void rangeModuleRemoveRange(RangeModule* obj, int left, int right) {

}

void rangeModuleFree(RangeModule* obj) {

}

/**
 * Your RangeModule struct will be instantiated and called as such:
 * struct RangeModule* obj = rangeModuleCreate();
 * rangeModuleAddRange(obj, left, right);
 * bool param_2 = rangeModuleQueryRange(obj, left, right);
 * rangeModuleRemoveRange(obj, left, right);
 * rangeModuleFree(obj);
 */

int main() {
    printf("Hello, World!\n");
    return 0;
}