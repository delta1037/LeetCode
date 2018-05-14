#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      int col=0,row=0;
      int i=0,j=0,m,n;
      for(row=0;row<9;row++){
        for(col=0;col<9;col++){
          if(board[row][col]!='.'){
            bool nums[9]={false};
            for(i=0;i<row;i++){
              if(board[row][i]!='.'){
                if(!nums[board[i][col]-'0']){
                  nums[board[i][col]-'0']=true;
                }else{
                  return false;
                }
              }
            }
            for(i=row+1;i<9;i++){
              if(board[row][i]!='.'){
                if(!nums[board[i][col]-'0']){
                  nums[board[i][col]-'0']=true;
                }else{
                  return false;
                }
              }

            }

            for(i=0;i<col;i++){
              if(board[row][i]!='.'){
                if(!nums[board[row][i]-'0']){
                  nums[board[row][i]-'0']=true;
                }else{
                  return false;
                }
              }
            }

            for(i=col+1;i<9;i++){
              if(board[row][i]!='.'){
                if(!nums[board[row][i]-'0']){
                  nums[board[row][i]-'0']=true;
                }else{
                  return false;
                }
              }

            }

            for(i=row-row%3,m=0;m<3;m++,i++){
              for(j=col-col%3,n=0;n<3;n++,j++){
                if(board[i][j]!='.'){
                  if(!nums[board[i][j]-'0']){
                    nums[board[i][j]-'0']= true;
                  }else{
                    return false;
                  }
                }
              }
            }


          }


        }
      }
      return true;
    }
};

int main(int argc,char* argv[]){

  return 0;
}