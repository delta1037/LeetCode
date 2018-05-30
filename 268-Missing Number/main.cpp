#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    int sum=0;
    int i=0;
    int numsSize=nums.size();
    for(i=1;i<=numsSize;i++){
      sum+=i;
      sum-=nums[i-1];
    }
    return sum;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}