#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

bool isValid(char* s);

typedef struct stack{
    char c;
    struct stack *next;
}stack,*linkl;

int main() {
    int n = 0;
    bool b;
    char s[10];
    scanf("%s",s);
    while (s[n]!='\0'){
        printf("%c\n",s[n]);
        n++;
    }

    b=isValid(s);
    if(b==true){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
bool isValid(char* s) {
    linkl flag, a, b, t;
    int n;
    n = 1;
    a = NULL;

    linkl L = (linkl) malloc(sizeof(stack));
    L->next = NULL;//L是栈的底部,不含元素
    flag = L;
    //printf("%p",L);

    if (s[0] != '\0') {
        linkl lin = (linkl) malloc(sizeof(stack));
        lin->c = s[0];
        lin->next = L;
        a = lin;
    }


    while (s[n] != '\0') {

        linkl lin = (linkl) malloc(sizeof(stack));
        lin->c = s[n];
        lin->next = a;
        b = lin;

        if (n != 0 && (a->c == '[' && b->c == ']') || (a->c == '{' && b->c == '}') || (a->c == '(' && b->c == ')')) {
            t = a;
            a = a->next;

            free(t);
            free(b);
            n++;
        } else {
            b->next = a;
            a = b;
            n++;
        }
    }
    return (flag == a )? true : false;
}