#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
      int slength=s.size()-1;
      int i=0;
      int front=slength;
      if(slength==-1){
        return 0;
      }
      while(s[front]==' '){
        front--;
      }
      if(front==-1){
        return 0;
      }
      i=front;
      while(s[i]!=' '&&i>=0){
        i--;
      }
      return front-i;
    }
};
int main() {
  string s="    ";
  Solution solution;
  solution.lengthOfLastWord(s);
  return 0;
}