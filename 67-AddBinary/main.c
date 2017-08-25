#include <stdio.h>

char* addBinary(char* a, char* b);

void main() {
    char *a;
    char *b;
    char *result;
    a="1010";
    b="1011";

    result=addBinary(a,b);

    printf("%s",result);

}
char* addBinary(char* a, char* b) {
    int ai=0,bi=0;
    int i=0,c=0;
    int boo=0;
    char *result;
    char t;

    while(a[ai]!='\0'){
        ai++;
    }
    while(b[bi]!='\0'){
        bi++;
    }
    result=(char *)malloc((ai>bi? ai+1:bi+1)* sizeof(char));
    ai--;
    bi--;

    while(ai!=-1&&bi!=-1){

        if(a[ai]=='1'&&b[bi]=='1'){
            boo==0 ? (boo=1,result[i]='0'): (result[i]='1');
            i++;
        }
        else if(a[ai]=='0'&&b[bi]=='0'){
            boo==0 ? (result[i]='0'):(result[i]='1',boo=0);
            i++;
        }
        else{
            boo==0 ? (result[i]='1'):(result[i]='0');
            i++;
        }

        ai--;
        bi--;
    }

    while(ai!=-1){
        if(a[ai]=='1'){
            boo==0 ? (result[i]='1'):(result[i]='0');
            i++;
            ai--;
        }
        else{
            boo==0 ? (result[i]='0'):(boo=0,result[i]='1');
            i++;
            ai--;
        }
    }
    while(bi!=-1){
        if(b[bi]=='1'){
            boo==0 ? (result[i]='1'):(result[i]='0');
            i++;
            bi--;
        }
        else{
            boo==0 ? (result[i]='0'):(boo=0,result[i]='1');
            i++;
            bi--;
        }

    }

    boo==0? (result[i]='\0'):(result[i]='1',result[i+1]='\0',i++);

    for(i=i-1;c<=i;c++,i--){
        t=result[c];
        result[c]=result[i];
        result[i]=t;
    }

    return result;
}