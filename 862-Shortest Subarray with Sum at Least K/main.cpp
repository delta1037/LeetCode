#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
      int Size=A.size();
      vector<vector<int>> num(Size);
      int i,j;
      for(i=0;i<Size;i++){
        num[i].resize(Size);
        num[i][i]=A[i];
        if(num[i][i]==K){
          return 1;
        }
      }

      for(i=0;i<Size;i++){
        for(j=1;i+j<Size;j++){
          num[i][i+j]=num[i][i+j-1]+A[i+j];
          if(num[i][i+j]==K){
            return j+1;
          }
        }
      }
      return -1;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}