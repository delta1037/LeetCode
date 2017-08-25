#include <stdio.h>


int climbStairs(int n);

int main() {
    int n=3;
    int result;
    result=climbStairs(n);
    printf("%d",result);
    return 0;
}
int climbStairs(int n) {
    int i;
    int c1=1;
    int c2=2;
    int cn;

    if(n==1){
        return c1;
    }
    if(n==2){
        return c2;
    }
    for(i=3;i<=n;i++){
        cn=c1+c2;
        c1=c2;
        c2=cn;
    }
    return cn;
}