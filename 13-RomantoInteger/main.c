#include <stdio.h>
#include <string.h>

int swich_si(char s){
    switch (s){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}
int romanToInt(char* s) {
    int t=(int)strlen(s);
    int sum=0;
    for(int i=t;i>=0;i--){
        if (swich_si(s[i])<swich_si(s[i + 1])) {
            sum-= swich_si(s[i]);
        }
        else {
            sum+=swich_si(s[i]);
        }
    }
    return sum;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}