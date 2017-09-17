#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>


typedef struct stack{
    char c;
    struct stack *next;
}stack,*linkl;


bool checkValidString(char* s) {
    int k=(int)strlen(s);


}
int main() {
    int n = 0;
    bool b;
    char s[10];
    scanf("%s",s);

    b=checkValidString(s);
    if(b==true){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}