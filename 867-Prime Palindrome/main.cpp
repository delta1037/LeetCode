#include <iostream>
#include <cmath>

class Solution {
public:
    bool isPrime(int N){
      for(int i=2;i<sqrt(N)+1;i++){
        if(N%i==0){
          return false;
        }
      }
      return true;
    }
    bool isPalind(int N){
      int a = N, r = 0;
      while (a > 0) {
        r = r*10 + a%10;
        a = a / 10;
      }
      return r == N;
    }
    int primePalindrome(int N) {
      if(N==1){
        return 2;
      }
      if(N==2){
        return 2;
      }
      int palind=0,t;
        for(int i=N;i<INT64_MAX;i++){
          if(i%2==0||i%5==0||i%3==0||i%7==0){
            continue;
          }
          if(isPalind(i)){
            if(isPrime(i)){
              return i;
            }
          }
        }
      return 0;
    }
};

int main() {
  Solution s;
  int res=s.primePalindrome(7);
  printf("%d",res);
  return 0;
}