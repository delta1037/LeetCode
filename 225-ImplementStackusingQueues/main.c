#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

/**
 * Your MyStack struct will be instantiated and called as such:
 * struct MyStack* obj = myStackCreate(maxSize);
 * myStackPush(obj, x);
 * int param_2 = myStackPop(obj);
 * int param_3 = myStackTop(obj);
 * bool param_4 = myStackEmpty(obj);
 * myStackFree(obj);
 */

typedef struct {
    int* nums;
    int top;
} MyStack;

/** Initialize your data structure here. */
MyStack* myStackCreate(int maxSize) {
    MyStack* obj=(MyStack*)malloc(sizeof(MyStack));
    obj->nums=(int*)malloc(sizeof(int));
    obj->top=-1;
    return obj;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    obj->top++;
    obj->nums[obj->top]=x;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    obj->top--;
    return obj->nums[obj->top+1];
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
    return obj->nums[obj->top];
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
    if(obj->top==-1){
        return true;
    }

    return false;
}

void myStackFree(MyStack* obj) {
    free(obj->nums);
    free(obj);
}

int main()
{
    printf("Hello, World!\n");
    return 0;
}