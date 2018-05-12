#include <iostream>

class Solution {
public:
    bool isPowerOfThree(int n) {
      if(n<=0){
        return false;
      }
      while(n%27==0){
        n=n/27;
      }
      while(n%3==0){
        n=n/3;
      }
      return n==1;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}