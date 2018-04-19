#include <stdio.h>
int findComplement(int num) {
  long k=2;
  while(num>k){
    k=k*2;
  }
  return k-1-num;
}
int main() {
  printf("Hello, World!\n");
  return 0;
}