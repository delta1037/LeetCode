#include <stdio.h>

int getnum(char* c){
    int re=0;
    int i=0;
    if(c[0]=='-'){
        i=1;
        while(c[i]!='\0'){
            re=re*10+(c[i]-'0');
            i++;
        }
        re=-re;
    }else{
        while(c[i]!='\0'){
            re=re*10+(c[i]-'0');
            i++;
        }
    }
    return re;
}

int calPoints(char (*ops)[5], int opsSize) {
    int sum=0;
    int i,j=0;
    int nums[1000];

    for(i=0;i<opsSize;i++){
        if((ops[i][0]>='0'&&ops[i][0]<='9')||ops[i][0]=='-'){
            nums[j]=getnum(ops[i]);
            sum=sum+nums[j];
            j++;
        }
        else{
            switch (ops[i][0]){
                case '+':
                    nums[j]=nums[j-1]+nums[j-2];
                    sum=sum+nums[j];
                    j++;
                    break;
                case 'D':
                    nums[j]=nums[j-1]*2;
                    sum=sum+nums[j];
                    j++;
                    break;
                case 'C':
                    j--;
                    sum=sum-nums[j];
                    break;
                default:break;
            }
        }
    }
    return sum;
}

int main() {
    char ops[5][5]={"5","2","C","D","+"};
    int re=calPoints(ops, 5);
    printf("%d",re);
    return 0;
}