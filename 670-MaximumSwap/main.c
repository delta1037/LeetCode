#include <stdio.h>

int maximumSwap(int num) {
    int nums[10];
    int re=0;

    int i=9;
    int j,j1=0,max;

    int flag=1;

    while (num>=10){
        nums[i]=num%10;
        num=num/10;
        i--;
    }
    nums[i]=num;

    int k=i;

    for(;i<9;i++){
        max=nums[i];
        flag=1;
        for(j=i+1;j<10;j++){
            if(max<=nums[j]){
                max=nums[j];
                j1=j;
                flag=0;
            }
        }
        if(flag==0&&nums[i]!=nums[j1]){
            max=nums[i];
            nums[i]=nums[j1];
            nums[j1]=max;
            break;
        }
    }

    while (k<10){
        re=re*10+nums[k];
        k++;
    }

    return re;
}
int main() {
    int re;
    re=maximumSwap(1000000);
    printf("%d",re);
    return 0;
}