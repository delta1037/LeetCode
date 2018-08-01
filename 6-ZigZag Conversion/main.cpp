#include <iostream>

using namespace std;

class Solution {
 public:
  string convert(string s, int numRows) {
      string res;
      if(numRows<2||numRows>s.size()){
          return s;
      }
      int block = 2*numRows-2;
      for(int i=0;i<numRows;++i){
          int j=0;
          while(i+j*block<s.size()){
              res.push_back(s[i+j*block]);
              if(i>0&&i<numRows-1&&(j+1)*block-i<s.size()){
                  res.push_back(s[(j+1)*block-i]);
              }
              ++j;
          }
      }
      return res;
  }
};
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}