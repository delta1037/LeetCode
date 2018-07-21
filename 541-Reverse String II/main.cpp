#include <iostream>


using namespace std;
class Solution {
public:
  void reverse(string &s,int prev,int swear){
    char t;
    while(prev<swear){
        t=s[prev];
        s[prev]=s[swear];
        s[swear]=t;

        prev++;
        swear--;
      }
  }
  string reverseStr(string s, int k) {
    for(int i=0;i<s.size ();i=i+2*k){
      reverse (s,i,i+k-1>s.size ()-1? s.size ()-1:i+k-1);
    }
    return s;
  }
};
int main ()
{
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
