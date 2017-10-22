#include <stdio.h>

int integerReplacement(int n) {
    int result=0;
    int nums[65]={0};
    int t=0,i;
    int num=0;

    while(n>0){
        nums[num]=n%2;
        n=n/2;
        num++;
    }

    num--;

    for(i=0;i<num;i++) {
        if(nums[i]==1){
            while (nums[i]==1){
              t++;
              i++;
            }

            if(t>=3){
                nums[i]=1;
                while(t>0){
                    nums[i-t]=0;

                }

            }
        }
    }

    return result;
}
int main() {
  int result=integerReplacement(65535);
  printf("%d",result);
  return 0;
}