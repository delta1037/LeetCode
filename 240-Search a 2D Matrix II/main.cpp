#include <iostream>
#include <vector>
using namespace std;
class Solution {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    unsigned long bottom=matrix.size()-1;
    if(bottom==-1){
      return false;
    }
    unsigned long right=matrix[0].size()-1;
    if(right==-1){
      return false;
    }
    unsigned long top=0,left=0;
    while(top<bottom&&left<right&&(target>matrix[bottom][left]||target<matrix[top][right]||target>matrix[top][right]||target<matrix[bottom][left])){
      if(target>matrix[bottom][left]){
        left++;
      }
      if(target<matrix[top][right]){
        right--;
      }
      if(target>matrix[top][right]){
        top++;
      }
      if(target<matrix[bottom][left]){
        bottom--;
      }
    }
    for(unsigned long i=top;i<=bottom;i++){
      for(unsigned long j=left;j<=right;j++){
        if(matrix[i][j]==target){
          return true;
        }
      }
    }
    return false;
  }
  //[[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]
};
int main() {
  cout << "Hello, World!" << endl;
  return 0;
}