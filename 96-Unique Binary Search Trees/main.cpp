#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int numTrees(int n) {
      vector<int> nums(n+1,0);
      nums[0]=1;
      nums[1]=1;
      nums[2]=2;
      for(int i=3;i<=n;i++){
        for(int j=0;j<i;j++){
          nums[i]+=nums[j]*nums[i-j-1];
        }
      }
      return nums[n];
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}