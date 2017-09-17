#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool validPalindrome(char* s) {
    int i,j;
    int k=(int)strlen(s);

    for(i=0,j=k-1;i<=j;i++,j--){
        if(s[i]==s[j]||i==j){
            continue;
        }else{
            if(s[i]==s[j-1]){

                int m,n;
                for(m=i,n=j-1;m<=k;m++,n--){
                    if(s[m]==s[n]||m==n){
                        continue;
                    }else{
                        break;
                    }
                }
                if(m==n){
                    return true;
                }

            }
            if(s[i+1]==s[j]){

                int m,n;
                for(m=i+1,n=j;m<=k;m++,n--){
                    if(s[m]==s[n]||m==n){
                        continue;
                    }else{
                        break;
                    }
                }
                if(m==n){
                    return true;
                }
            }
            else{
                return false;
            }
        }
    }

    return true;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}