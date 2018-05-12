#include <iostream>
using namespace std;
class Solution1 {
public:
    bool isSubsequence(string s, string t) {
      int ss=s.size();
      int st=t.size();
      int j=0;
      for(int i=0;i<st;i++){
        if(s[j]==t[i]){
          j++;
        }
        if(j==ss){
          break;
        }
      }
      if(j==ss){
        return true;
      }
      return false;
    }
};
class Solution2 {
public:
    bool isSubsequence(string s, string t) {
      int ss=s.size()-1;
      int st=t.size()-1;
      int j=0;
      for(int i=0;i<=st;i++,st--){
        if(s[j]==t[i]){
          j++;
        }
        if(t[st]==s[ss]){
          ss--;
        }
        if(j==(ss+1)){
          break;
        }
      }
      return j==(ss+1);
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}