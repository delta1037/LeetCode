#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
      int m=obstacleGrid.size();
      if(m==0){
        return 0;
      }
      int n=obstacleGrid[0].size();
      int matrix[m][n];
      if(obstacleGrid[0][0]==0){
        matrix[0][0]=1;
      }else{
        return 0;
      }

      for(int i=1;i<n;i++){
        if(obstacleGrid[0][i]==0){
          matrix[0][i]=matrix[0][i-1];
        } else{
          matrix[0][i]=0;
        }
      }
      for(int i=1;i<m;i++){
        if(obstacleGrid[i][0]==0){
          matrix[i][0]=matrix[i-1][0];
        } else{
          matrix[i][0]=0;
        }
        for(int j=1;j<n;j++){
          matrix[i][j]=matrix[i-1][j]+matrix[i][j-1];
          if(obstacleGrid[i][j]){
            matrix[i][j]=0;
          }
        }
      }
      return matrix[m-1][n-1];
    }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}