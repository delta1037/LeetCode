#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <malloc.h>

bool isInterleave(char* s1, char* s2, char* s3) {
    int len1=(int)strlen(s1);
    int len2=(int)strlen(s2);
    int len3=(int)strlen(s3);

    if(len3!=(len1+len2)){
        return false;
    }

    bool** dp=(bool**)malloc((len1+1)* sizeof(bool*));
    for(int k=0;k<=len1;k++){
        dp[k]=(bool*)malloc((len2+1)*sizeof(bool));
    }

    int i,j;
    for(i=0;i<=len1;i++){

        for(j=0;j<=len2;j++){
            if(i==0&&j==0){
                dp[i][j]=true;
            }
            else if(i==0){
                dp[i][j] = ( dp[i][j-1] && s2[j-1] == s3[i+j-1]);
            }
            else if(j==0){
                dp[i][j] = ( dp[i-1][j] && s1[i-1] == s3[i+j-1]);

            }
            else{
                dp[i][j] = (dp[i-1][j] && s1[i-1] == s3[i+j-1] ) || (dp[i][j-1] && s2[j-1] == s3[i+j-1] );
            }
        }
    }

    return dp[len1][len2];
}
int main() {
    printf("Hello, World!\n");
    return 0;
}