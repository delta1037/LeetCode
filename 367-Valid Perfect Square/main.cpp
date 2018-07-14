#include <iostream>

class Solution {
public:
    bool helper(int num,int mod){
      int sum=0;
      int k=sum*10+mod;
      k=k*k;
      while(k<num){
        ++sum;
        k=sum*10+mod;
        k=k*k;
      }
      return k==num;
    }
    bool isPerfectSquare(int num) {
      if(num==0){
        return false;
      }
      int mod=num%10;
      if(mod==0||mod==1||mod==4||mod==5||mod==6||mod==9){
        if(mod==0){
          return helper(num,0);
        }else if(mod==1){
          return helper(num,1)||helper(num,9);
        }else if(mod==4){
          return helper(num,2)||helper(num,8);
        }else if(mod==5){
          return helper(num,5);
        }else if(mod==6){
          return helper(num,6)||helper(num,4);
        }else{
          return helper(num,3)||helper(num,7);
        }
      }else{
        return false;
      }
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}