#include <iostream>
#include <vector>
using namespace std;
class Solution {
 public:
  bool lemonadeChange(vector<int>& bills) {
    int billnum[3]={0,0,0};
    for(int i=0;i<bills.size();i++){
      if(bills[i]==20&&billnum[1]>0){
        billnum[2]++;
        billnum[0]--;
        billnum[1]--;
      }else if(bills[i]==20&&billnum[1]==0){
        billnum[2]++;
        billnum[0]-=2;
      }else if(bills[i]==10){
        billnum[1]++;
        billnum[0]--;
      }else{
        billnum[0]++;
      }

      if(billnum[0]<0){
        return false;
      }
    }
    return true;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}