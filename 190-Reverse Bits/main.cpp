#include <iostream>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      uint32_t m=0;
      for (int i = 0; i < 32; i++, n >>= 1) {
        m <<= 1;
        m |= n & 1;
      }
      return m;
    }
};
int main() {
  Solution s;
  uint32_t m=s.reverseBits(43261596);
  std::cout << m<< std::endl;
  return 0;
}