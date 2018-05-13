#include <iostream>

using namespace std;
class Solution {
 public:
  int myAtoi(string str) {
    int strSize=str.size();
    if(strSize<1){
      return 0;
    }
    int i=0;
    int sign=1;
    long renum=0;
    //remove space
    while(str[i]==' '){
      i++;
    }
    if(str[i]=='+'||str[i]=='-'||isdigit(str[i])){
      if(str[i]=='+'||str[i]=='-'){
        sign= str[i]=='+'? 1:-1;
        i++;
      }
      while(i<strSize&&isdigit(str[i])){
        renum=renum*10+str[i]-'0';
        if(renum>INT32_MAX){
          return sign==1? INT32_MAX:INT32_MIN;
        }
      }
    }else{
      return 0;
    }
    return (int)renum*sign;

  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}