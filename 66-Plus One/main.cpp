#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int t=1,num;
      for(int i=digits.size()-1;i>=0;i--){
        num=digits[i];
        digits[i]=(digits[i]+t)%10;
        t=(num+t)/10;
        if(t==0){
          break;
        }
      }
      if(t!=0){
        digits.resize(digits.size()+1);
        for(int i=digits.size();i>0;i--){
          digits[i]=digits[i-1];
        }
        digits[0]=t;
      }
      return digits;
    }
};
int main() {
  vector<int> res(3);
  res[0]=9;
  res[1]=9;
  res[2]=9;
  Solution s;
  res=s.plusOne(res);
  return 0;
}