#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<string> summaryRanges(vector<int>& nums) {
    int pt1 = 0;
    vector<string> res;
    for (int i = 1; i < nums.size() + 1; i++) {
      if (i != nums.size() && nums[i] - nums[i-1] == 1) {
        continue;
      }
      if (i-1 == pt1) {
        res.push_back(to_string(nums[pt1]));
      }else{
        res.push_back(to_string(nums[pt1]) + "->" + to_string(nums[i-1]));
      }
      pt1 = i;
    }
    return res;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}