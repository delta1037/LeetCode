#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>> matrix(n,vector<int>(n,0));
      int top=0,left=0;
      int bottom=n-1,right=n-1;
      int index = 1;
      while(true) {
        for(int t = left; t <= right; ++t) {
          matrix[top][t]=index;
          ++index;
        }
        if(index ==n*n) break;
        ++top;

        for(int r = top; r <= bottom; ++r) {
          matrix[r][right]=index;
          ++index;
        }
        if(index ==n*n) break;
        --right;

        for(int d = right; d >= left; --d) {
          matrix[bottom][d]=index;
          ++index;
        }
        if(index ==n*n) break;
        --bottom;

        for(int l = bottom; l >= top; --l) {
          matrix[l][left]=index;
          ++index;
        }
        if(index ==n*n) break;
        ++left;
      }
      return matrix;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}