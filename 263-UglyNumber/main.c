#include <stdio.h>
#include <stdbool.h>

bool isUgly(int num) {
    if(num<=0){
        return false;
    }

    int a[3]={2,3,5};

    for(int i=0;i<3;i++){
        while(num%a[i]==0){
            num=num/a[i];
        }
    }

    return num==1;

}

int main() {
    int num=90;
    bool b=isUgly(num);
    printf("%d",b);
    return 0;
}