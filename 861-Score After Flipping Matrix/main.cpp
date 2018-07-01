#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int matrixScore(vector<vector<int>>& A) {
    int rowSize=A.size();
    int colSize=A[0].size();
    int i,j;
    int num1=0,sum=0;
    vector<int> nums(colSize,0);
    nums[0]=rowSize;

    for(i=0;i<rowSize;i++){
      if(A[i][0]==0){
        for(j=0;j<colSize;j++){
          A[i][j]=(A[i][j]==1? 0:1);
        }
      }
    }

    for(i=1;i<colSize;i++){
      for(j=0;j<rowSize;j++){
        if(A[j][i]==1){
          nums[i]++;
        }
      }
      if(nums[i]<rowSize-nums[i]){
        nums[i]=rowSize-nums[i];
      }
    }
    int tag=1;
    for(i=0;i<colSize;i++){
      sum+=nums[colSize-i-1]*tag;
      tag=tag*2;
    }
    return sum;
  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}