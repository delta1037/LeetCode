#include <stdio.h>
#include <stdbool.h>

bool judgeCircle(char* moves) {
    int right_left=0;
    int up_down=0;
    int i=0;

    while(moves[i]!='\0'){
        switch(moves[i]){
            case 'U':
                up_down++;
                break;
            case 'D':
                up_down--;
                break;
            case 'R':
                right_left++;
                break;
            case 'L':
                right_left--;
                break;
            default:
                break;
        }
        i++;
    }

    return right_left==0 && up_down==0;
}
int main() {
    char* moves="UD";
    bool b;
    b=judgeCircle(moves);
    printf("%d",b);
    return 0;
}