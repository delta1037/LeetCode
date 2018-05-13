#include <iostream>
using namespace std;
class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
      int total=(D-B)*(C-A)+(H-F)*(G-E);
      if(B>=H||F>=D||C<=E||G<=A){
        return total;
      }
      int lower_x = max(A,E), lower_y = max(B,F), upper_x = min(C,G), upper_y = min(D,H);
      return total-(upper_x-lower_x)*(upper_y-lower_y);
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}