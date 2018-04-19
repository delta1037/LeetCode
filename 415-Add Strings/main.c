#include <stdio.h>
#include <malloc.h>

int count(char* nums){
  int i=0;
  while(nums[i]!='\0'){
    i++;
  }
  return i;
}
char addnum(char* num1,char* num2,int m,int n){
  m--;
  n--;
  int yu=0;
  int t;
  while(m>=0){
    if(n<0){
      t=num1[m]-'0';
      num1[m]=(char)(t+yu)%10+'0';
      yu=(t+yu)/10;
      m--;
    } else{
      t=num1[m]-'0';
      num1[m]=(char)(t+num2[n]-'0'+yu)%10+'0';
      yu=(t+num2[n]-'0'+yu)/10;
      m--;n--;
    }
  }
  return (char)(yu+'0');
}
char* addStrings(char* num1, char* num2) {
  int numsSize1=count(num1);
  int numsSize2=count(num2);
  int i=0,t=0;
  char yu;
  if(numsSize1>numsSize2){
    char* result=(char*)malloc((numsSize1+2)* sizeof(char));
    result[0]='\0';
    yu=addnum(num1,num2,numsSize1,numsSize2);
    if(yu!='0'){
      result[0]=yu;
      t=1;
    }
    for(i=0;i<numsSize1;i++){
      result[i+t]=num1[i];
    }
    result[i+t]='\0';
    return result;
  }else{
    char* result=(char*)malloc((numsSize2+2)* sizeof(char));
    result[0]='\0';
    yu=addnum(num2,num1,numsSize2,numsSize1);
    if(yu!='0'){
      result[0]=yu;
      t=1;
    }
    for(i=0;i<numsSize2;i++){
      result[i+t]=num2[i];
    }
    result[i+t]='\0';
    return result;
  }
}

int main() {
  printf("Hello, World!\n");
  return 0;
}