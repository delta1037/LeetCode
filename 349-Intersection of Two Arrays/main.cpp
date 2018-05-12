#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      vector<int> res;
      sort(nums1.begin(),nums1.end());
      sort(nums2.begin(),nums2.end());
      int i=0,j=0;
      int last=NULL;
      while(i<nums1.size()&&j<nums2.size()){
        if(nums1[i]==nums2[j]){
          if(last==NULL||last!=nums1[i]){
            res.push_back(nums1[i]);
            last=nums1[i];
          }
          j++;
          i++;
        }else if(nums1[i]<nums2[j]){
          i++;
        }else{
          j++;
        }
      }
      return res;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}