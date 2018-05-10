#include <iostream>
#include <vector>
using namespace std;
int main() {
  cout << "Hello, World!" << endl;
  return 0;
}
class Solution {
 public:
  double findMaxAverage(vector<int>& nums, int k) {
    double sum=0;
    double max=0;
    for(int i=0;i<k;i++){
      sum+=((double)nums[i])/k;
    }
    max=sum;
    for(int i=k;i<nums.size();i++){
      sum=sum+((double)(nums[i]-nums[i-k]))/k;
      if(sum>max){
        max=sum;
      }
    }
    return max;
  }
};