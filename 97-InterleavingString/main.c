#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <malloc.h>

bool isInterleave(char* s1, char* s2, char* s3) {
    int nums3=(int)strlen(s3);
    char* ss=(char*)malloc(nums3*sizeof(char));
    int i=0;
    int j=0;
    int k=0;
    while (s3[j]!='\0'){
        if(s3[j]==s2[i]&&s2[i]!='\0'){
            j++;
            i++;
        }
        else{
            ss[k]=s3[j];
            ss[k+1]='\0';
            k++;
            j++;
        }
    }

    if(s2[i]!='\0'){
        return false;
    }

    i=0;

    while (ss[i]!='\0'){
        if(ss[i]==s1[i]){
            i++;
        }
        else{
            return false;
        }
    }
    if(s1[i]!='\0'){
        return false;
    }

    return true;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}