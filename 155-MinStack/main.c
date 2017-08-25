#include <stdio.h>
#include <malloc.h>

typedef struct {
    int* e;
    int* min;
    int top;
    int maxsize;

} MinStack;

MinStack* minStackCreate(int maxSize);
void minStackPush(MinStack* obj, int x);
void minStackPop(MinStack* obj);
int minStackTop(MinStack* obj);
int minStackGetMin(MinStack* obj);
void minStackFree(MinStack* obj);

int main() {
    int maxSize=5;
    int x=6;
    MinStack* obj=minStackCreate(maxSize);
    minStackPush(obj, x);

    int param_3 = minStackTop(obj);
    printf("%d\n",param_3);
    int param_4 = minStackGetMin(obj);
    printf("%d\n",param_4);
    minStackPop(obj);
    minStackFree(obj);
    return 0;
}


/** initialize your data structure here. */

MinStack* minStackCreate(int maxSize) {
    MinStack* obj=(MinStack*)malloc(sizeof(MinStack));
    obj->e=(int*)malloc(maxSize* sizeof(int));
    obj->min=(int*)malloc(maxSize* sizeof(int));
    obj->maxsize=maxSize;
    obj->top=0;
    obj->min[obj->top]=2147483647;
    return obj;
}

void minStackPush(MinStack* obj, int x) {
    if(obj->maxsize==0){
        return;
    }
    obj->e[obj->top+1]=x;
    obj->maxsize--;

    if(x<(obj->min[obj->top])){
        obj->min[obj->top+1]=x;
    }else{
        obj->min[obj->top+1]=obj->min[obj->top];
    }
    obj->top++;
}

void minStackPop(MinStack* obj) {
    if(obj->top==0){
        return;
    }
    obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->e[obj->top];
}
int minStackGetMin(MinStack* obj) {
    return obj->min[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * struct MinStack* obj = minStackCreate(maxSize);
 * minStackPush(obj, x);
 * minStackPop(obj);
 * int param_3 = minStackTop(obj);
 * int param_4 = minStackGetMin(obj);
 * minStackFree(obj);
 */