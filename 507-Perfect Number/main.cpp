#include <iostream>
#include <tgmath.h>

class Solution {
public:
  bool checkPerfectNumber(int num) {
    if(num<2){
      return false;
    }
    int sum=1,i;
    for(i=2;i<sqrt(num);i++){
      if(num%i==0){
        sum=sum+num/i+i;
      }
    }
    if(i==sqrt(num)){
      sum+=i;
    }
    return sum==num;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}