#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int binaryGap(int N) {
    int maxGap=0,t;
    vector<int> nums;
    while(N>0){
      nums.push_back(N%2);
      N=N/2;
    }
    int i=0;
    while(nums[i]==0&&i<nums.size()){
      i++;
    }
    int f=i,b=i;
    for(i=i+1;i<nums.size();i++){
      if(nums[i]==1){
        maxGap= maxGap>b-f+1? maxGap:b-f+1;
        f=i;
      }
      b++;
    }
    return maxGap;
  }
};
int main() {

  Solution s;
  int res = s.binaryGap(11);
  cout<<res;
  return 0;
}