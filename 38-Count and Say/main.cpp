#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    string countAndSay(int n) {
      vector<int> bits;
      string res;
      while(n>0){
          bits.push_back (n%10);
          n=n/10;
      }

      int left=0,right=bits.size ()-1;
      while(left<right){
        int t=bits[left];
        bits[left]=bits[right];
        bits[right]=t;
        left++;
        right--;
      }
      int count=1;
      bits.push_back (bits[bits.size ()-1]-1);
      for(int i=1;i<bits.size ();i++){
        if(bits[i]==bits[i-1]){
          count++;
        }else{
          res.push_back (count+'0');
          res.push_back (bits[i-1]+'0');
          count=1;
        }
      }
      return res;
    }
};

int main ()
{
  std::cout << "Hello, World!" << std::endl;
  return 0;
}