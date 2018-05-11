#include <iostream>
#include <vector>
using namespace std;
/*
class Solution {
 public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    unsigned long bottom=matrix.size()-1;
    if(bottom==-1){
      return result;
    }
    unsigned long right=matrix[0].size()-1;
    if(right==-1){
      return result;
    }
    unsigned long top=0,left=0;
    unsigned long i=0;

    while(bottom>=top&&left<=right){
      for(i=left;i<=right;i++){
        result.push_back(matrix[top][i]);
      }
      top++;

      for(i=top;i<=bottom;i++){
        result.push_back(matrix[i][right]);
      }
      right--;

      for(i=right;i>=left;i--){
        result.push_back(matrix[bottom][i]);
      }
      bottom--;

      for(i=bottom;i>=top;i--){
        result.push_back(matrix[i][left]);
      }
      left++;
    }
    return result;

  }
};



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
int* spiralOrder(int** matrix, int matrixRowSize, int matrixColSize) {
  int* result=(int*)malloc(matrixColSize*matrixRowSize*sizeof(int));
  if(matrixColSize==0||matrixRowSize==0){
    return result;
  }
  int bottom=matrixRowSize-1;
  int right=matrixColSize-1;
  int top=0,left=0;
  int i=0,j=0;

  while(bottom>=top&&left<=right){
    for(i=left;i<=right;i++){
      result[j]=matrix[top][i];
      j++;
    }
    top++;

    for(i=top;i<=bottom;i++){
      result[j]=matrix[i][right];
      j++;
    }
    right--;

    for(i=right;i>=left;i--){
      result[j]=matrix[bottom][i];
      j++;
    }
    bottom--;

    for(i=bottom;i>=top;i--){
      result[j]=matrix[i][left];
      j++;
    }
    left++;
  }
  return result;

}
*/
class Solution {
 public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if(matrix.size() == 0) return vector<int>();
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;
    vector<int> vec(matrix[0].size() * matrix.size());
    int index = 0;
    while(true) {
      for(int t = left; t <= right; ++t) {
        vec[index] = matrix[top][t];
        ++index;
      }
      if(index == vec.size()) break;
      ++top;

      for(int r = top; r <= bottom; ++r) {
        vec[index] = matrix[r][right];
        ++index;
      }
      if(index == vec.size()) break;
      --right;

      for(int d = right; d >= left; --d) {
        vec[index] = matrix[bottom][d];
        ++index;
      }
      if(index == vec.size()) break;
      --bottom;

      for(int l = bottom; l >= top; --l) {
        vec[index] = matrix[l][left];
        ++index;
      }
      if(index == vec.size()) break;
      ++left;
    }
    return vec;

  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}