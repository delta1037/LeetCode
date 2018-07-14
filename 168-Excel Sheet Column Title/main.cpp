#include <iostream>

using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
      string s,res;
      while(n>0){
        if(n%26==0){
          s.push_back('Z');
          n=n/26;
          n--;
          if(!n){
            break;
          }
        }else{
          char t=n%26+'A'-1;
          s.push_back(t);
          n=n/26;
        }

      }
      for(int i=s.size()-1;i>-1;i--){
        res.push_back(s[i]);
      }
      return res;
    }
};
int main() {
  Solution s;
  string res=s.convertToTitle(1);
  return 0;
}