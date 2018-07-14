#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isDividingNumber(int num){
      int cnum=num;
      int t;
      while(cnum>0){
        t=cnum%10;

        if(t==0||num%t!=0){
          return false;
        }
        cnum=cnum/10;
      }
      return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
      vector<int> res;
      for(int i=left;i<right+1;i++){
        if(isDividingNumber(i)){
          res.push_back(i);
        }
      }
      return res;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}