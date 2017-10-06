#include <stdio.h>
#include <string.h>

int findSubstringInWraproundString(char* p) {
    int sum=0;
    int len=(int)strlen(p);
    int i=0,j;
    while(p[i]!='\0'){
        j=i;
        printf("---%c-%c\n",p[j],p[j+1]);
        sum++;
        while (p[j+1]!='\0'||((p[j+1]-p[j]==1)||(p[j+1]-p[j]==-25))){
            sum++;
            printf("%c-%c-%d\n",p[j],p[j+1],sum);
            j++;
        }

        i++;
    }
    return sum;
}
int main() {
    char *p="ab";
    int re=findSubstringInWraproundString(p);
    printf("%d",re);
    return 0;
}