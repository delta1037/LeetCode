#include <iostream>
#include <tgmath.h>

class Solution {
public:
    bool isPowerOfFour(int num) {
      double d=log(num)/log(4);
      int n=(int)d;
      return n==d;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}