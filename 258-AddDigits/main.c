#include <stdio.h>
/**
 * 大神的代码
 * int res = num % 9;
 × return (res != 0 || num == 0) ? res : 9;
 *
 */
int addDigits(int num) {

    int sum=0;
    while(num%10>=0&&num>0){
        sum=sum+num%10;
        num=num/10;
    }

    if(sum>=10){
        return addDigits(sum);
    }

    return sum;
}
int main() {
    int result;
    result=addDigits(2017);
    printf("%d",result);
    return 0;
}