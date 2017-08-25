#include <stdio.h>
#include <values.h>

int reverse(int i);
int main() {
    int result;
    int putin;
    scanf("%d",&putin);
    result=reverse(putin);
    printf("%d",result);
    return 0;
}
int reverse(int putin){
    int putina;
    putina=putin;
    long result=putina%10;
    if(putin>INT_MAX||putin<INT_MIN){
        return 0;
    }

    while(putina/10!=0){
        putina=putina/10;
        result=result*10+putina%10;

        printf("%ld\n",result);
        printf("%ld  %d %d",result,INT_MIN,INT_MAX);
        if(result>INT_MAX||result<INT_MIN){
            return  0;
        }
        printf("%ld\n",result);
    }
    return (int)result;
}