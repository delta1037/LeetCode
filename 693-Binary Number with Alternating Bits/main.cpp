#include <iostream>

class Solution {
 public:
  bool hasAlternatingBits(int n) {
    if(n%2==0){
      while(n>0){
        if(n%2==0){
          n=n>>1;
        }else{
          return false;
        }
        if(n>0&&n%2==1){
          n=n>>1;
        }else{
          return false;
        }
      }
    }else{
      while(n>0){
        if(n%2==1){
          n=n/2;
        }else{
          return false;
        }
        if(n==0||n%2==0){
          n=n/2;
        }else{
          return false;
        }
      }
    }
    return true;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}