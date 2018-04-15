#include <stdio.h>
#include <stdbool.h>

bool isHappy(int n) {
  int newN=0;
  while(n>6){
    newN=0;
    while(n>0){
      newN=(n%10)*(n%10)+newN;
      n=n/10;
    }
    n=newN;
  }
  return n==1;
}

int main() {
  bool b;
  //printf("%d",INT_MAX);
  b=isHappy(19);
  printf("%d",b);
  return 0;
}