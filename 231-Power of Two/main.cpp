#include <iostream>

class Solution {
 public:
  bool isPowerOfTwo(int n) {
    if(n<=0){
      return false;
    }
    while(n%1024==0){
      n=n/1024;
    }
    while(n%64==0){
      n=n/64;
    }
    while(n%2==0){
      n=n/2;
    }
    return n==1;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}