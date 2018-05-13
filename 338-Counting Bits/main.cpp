#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> countBits(int num) {
      vector<int> res;
      if(num>=0){
        res.push_back(0);
      }
      for(int i=1;i<=num;i++){
        res.push_back(res[i>>1]+i%2);
      }
      return res;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}