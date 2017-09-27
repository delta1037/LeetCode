#include <stdio.h>

int lengthOfLongestSubstring(char* s) {

    int max=0;
    int i=0,k=0;
    int j;
    while(s[i]!='\0'){
        j=i-k;
        k=0;
        for(;j<i;j++){
            if(s[i]==s[j]){
                k=0;
            }
            else{
                k++;
            }
        }

        if(k>max){
            max=k;
        }

        i++;

    }


    return max;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}