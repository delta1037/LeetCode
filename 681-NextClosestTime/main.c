#include <stdio.h>
#include <string.h>

char* nextClosestTime(char* time) {
    int len=(int)strlen(time);

    int hour=0,minutes=0;
    int i=0;
    while (time[i]!=':'){
        i++;
    }
    if(i==1){
        hour=time[0]-'0';
    } else{
        hour=(time[0]-'0')*10+time[1]-'0';
    }

    if((len-i)==1){
        minutes=time[i+1]-'0';
    }else{
        minutes=(time[i+1]-'0')*10+time[i+2]-'0';
    }



}
int main() {
    printf("Hello, World!\n");
    return 0;
}