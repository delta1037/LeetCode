#include <iostream>
#include <vector>

using namespace std;
class Solution {
 public:
  bool isValidSudoku(vector<vector<char>>& board) {
    vector<short> col(9,0);
    vector<short> row(9,0);
    vector<short> block(9,0);

    for(int i=0;i<9;i++){
      for(int j=0;j<9;j++){
        if(board[i][j]!='.'){
          int id=1<<(board[i][j]-'0');
          if((id&row[i])||(id&col[j])||(id&block[i/3*3+j/3])){
            return false;
          }
          row[i]|=id;
          col[j]|=id;
          block[i/3*3+j/3]|=id;
        }

      }
    }
    return true;

  }
};

int main(int argc,char* argv[]){
  int id1=1<<('9'-'0');
  int id2=1<<('5'-'0');
  cout<<id1<<"  "<<id2;
  return 0;
}