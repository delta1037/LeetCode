#include <iostream>
#include <tgmath.h>
#include <vector>

using namespace std;
class Solution {
 public:
    int countPrimes(int n) {
      if(n<3){
        return 0;
      }
      int res=1;
      vector<bool> nums(n,true);
      for(int i=3;i<n;i=i+2){
        if(nums[i]){
          res++;
          for(int j=i;j<n;j=j+i){
            nums[j]=false;
          }
        }
      }
      return res;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}