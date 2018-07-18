#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.size()==0){
        return 0;
      }
      int t=0;
      int i;
      int flag=nums[0]-1;
      for(i=2;i<nums.size();i++){
        if(nums[i]==nums[i-1-t]&&nums[i]==nums[i-2-t]){
          t++;
        }
        nums[i-t]=nums[i];
        if(t!=0){
          nums[i]=flag;
        }
      }
      i=0;
      while(nums[i]!=flag&&i<nums.size()){
        i++;
      }
      nums.resize(i);
      return i;
    }
};
int main() {
  vector<int> nums;
  for(int i=0;i<3;i++){
    nums.push_back(1);
  }

  nums.push_back(2);
  nums.push_back(2);
  nums.push_back(3);

  nums.push_back(4);
  nums.push_back(4);
  nums.push_back(4);

  nums.push_back(4);
  nums.push_back(4);
  nums.push_back(4);

  Solution s;
  int res=s.removeDuplicates(nums);
  cout<<res;
  return 0;
}