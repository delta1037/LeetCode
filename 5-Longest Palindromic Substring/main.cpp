#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  string longestPalindrome(string s) {
      string st;

      int i=0;
      st.push_back('$');
      st.push_back('#');
      while (i<s.size()){
          st.push_back(s[i]);
          st.push_back('#');
          i++;
      }
      st.push_back('^');

      vector<int> RL(st.size(),0);
      int maxRight=0,pos=0,maxLen=0,maxCenter=0;

      for(i=1;i<st.size()-1;i++){
          if(i<maxRight){
              RL[i]=min(RL[2*pos-i],maxRight-i);
          }else{
              RL[i]=1;
          }
          while(i-RL[i]>-1&&i+RL[i]<st.size()&&st[i-RL[i]]==st[i+RL[i]]){
              ++RL[i];
          }
          if(RL[i]+i>maxRight){
              maxRight=RL[i]+i;
              pos=i;
          }
          if(RL[i]>maxLen){
              maxLen=RL[i];
              maxCenter=i;
          }
      }
      cout<<maxLen<<endl;
      return s.substr(maxCenter-maxLen/2,maxLen-1);
  }
};
int main()
{
    Solution s;
    string t="abcdefg";
    string res=s.longestPalindrome(t);
    cout<<res;
    return 0;
}