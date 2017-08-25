#include <stdio.h>
#include <stdbool.h>

char* reverseVowels(char* s);
bool yuan(char s);

int main() {
    char* s="leetcode";
    s=reverseVowels(s);
    printf("%s",s);
    return 0;
}
char* reverseVowels(char* s) {
    int i=0,j;
    char t;
    for(j=0;s[j]!='\0';j++);
    j=j-1;

    while(i<j){
        while(i<j&&!yuan(s[i])){
            i++;
        }
        while(i<j&&!yuan(s[j])){
            j--;
        }
        //printf("%c-%c\n",s[i],s[j]);

        t=s[i];
        s[i]=s[j];
        s[j]=t;

        i++;
        j--;
    }

    return s;
}
bool yuan(char s){
    char yuan[10]={'a','A','e','E','i','I','o','O','u','U'};
    int i;
    for(i=0;i<10;i++){
        if(s==yuan[i]){
            return true;
        }
    }
    return false;
}
