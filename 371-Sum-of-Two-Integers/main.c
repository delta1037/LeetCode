#include <stdio.h>

int getSum(int a, int b) {
    int sum = a ^ b;
    int carry = (a & b) << 1;

    while(carry != 0){
        int num1 = sum;
        int num2 = carry;
        sum = num1 ^ num2;
        carry = (num1 & num2) << 1;
    }

    return sum;
}

int main()
{
    int a=2972;
    int b=89347;
    int result=getSum(a,b);

    printf("%d",result);
    return 0;
}