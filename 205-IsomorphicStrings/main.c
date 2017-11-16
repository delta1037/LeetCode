#include <stdio.h>
#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {
    int cS[256]={0};
    int cT[256]={0};

    int i=0;

    for(i=0;s[i]!='\0';i++){
        if(cS[s[i]]!=cT[t[i]]){
            return false;
        }
        cS[s[i]]=i+1;
        cT[t[i]]=i+1;
    }

    return true;
}
int main()
{
    char *s="aa";
    char *t="ab";

    bool result;

    result=isIsomorphic(s,t);

    printf("%d",result);

    return 0;
}