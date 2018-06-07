#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
 public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    map <int,int> p;
    nums.insert(nums.begin(),-1);
    for(int i=1;i<nums.size();i++){
      if(p[nums[i]]==0){
        p[nums[i]]=i;
      }else{
        if(i-p[nums[i]]<=k){
          return true;
        }else{
          p[nums[i]]=i;
        }
      }
    }
    return false;
  }
};
int main() {
  vector<int> nums(4);
  nums[0]=1;
  nums[1]=2;
  nums[2]=3;
  nums[3]=1;
  Solution s;
  bool b=s.containsNearbyDuplicate(nums,3);
  cout<<b;
  return 0;
}