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
    string reverseWords(string s) {
      int len=s.size ();
      int i=0;
      if(len>0){
          while(s[i]==' '){
              i++;
            }
          s.erase (0,i);
        }
      len = s.size ();
      i=len-1;
      if(len>0){
          while(s[i]==' '){
              i--;
            }
          s.erase (i+1,len);
        }

      if(s.size ()==0){
          return s;
      }

      int t=0;
      for(i=0;i<s.size ();i++){
          if(s[i]==' '){
              if(s[i-1]!=' '){
                  s[t++]=s[i];
                }
            }
          if(s[i]!=' '){
              s[t++]=s[i];
            }
        }
      s.erase (t,i-1);
      int prev=0;
      for(i=0;i<s.size ();i++){
          if(s[i]==' '){
            reverse (s,prev,i-1);
            prev=i+1;
          }else if(i==s.size ()-1){
            reverse (s,prev,i);
          }
      }
      return s;
    }
};
int main ()
{
  std::cout << "Hello, World!" << std::endl;
  return 0;
}