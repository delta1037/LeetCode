#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int sum=0;
      for(int i=0;i<nums.size();i=i+2)
        sum+=nums[i];

      return sum;
    }
};