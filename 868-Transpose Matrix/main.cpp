#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
      int i,j;
      vector<vector<int>> res(A[0].size());
      for(i=0;i<A[0].size();i++){
        res[i].resize(A.size());
      }
      for(i=0;i<A.size();i++){
        for(j=0;j<A[0].size();j++){
          res[j][i]=A[i][j];
        }
      }
      return res;
    }
};
int main() {
  vector<vector<int>> res(3,3);
  return 0;
}