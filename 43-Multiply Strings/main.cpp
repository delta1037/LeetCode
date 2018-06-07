#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
      int num1Size=num1.size();
      int num2Size=num2.size();
      int i,j;
      string result;
      if(num1Size==1||num2Size==1){
        if(num1[0]=='0'||num2[0]=='0'){
          return to_string(0);
        }
      }
      vector<int>ans (num1Size+num2Size,0);
      for(i=num1Size-1;i>0;i--){
        for(j=num2Size-1;j>=0;j--){
          ans[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
        }
      }
      for(i=num1Size+num2Size-1;i>=0;i--){
        if(ans[i]>9){
          ans[i-1]+=ans[i]/10;
          ans[i]=ans[i]%10;
        }
      }
      while(ans.front()==0){
        ans.erase(ans.begin());
      }
      for(i=0;i<ans.size();i++){
        result+=to_string(ans[i]);
      }
      return result;
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}