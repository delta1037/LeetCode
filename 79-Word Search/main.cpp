#include <iostream>
#include <vector>

using namespace std;
class Solution {
 public:
  bool exist(vector<vector<char>>& board, string word) {
    if(board.size() < 1 || board[0].size() < 1 || word.size() < 1) return false;
    int i,j;
    int row=board.size();
    int col=board[0].size();
    int slength=word.size();

    vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(),false));

    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
        if(board[i][j]==word[0]){
          if(SearchAround(board,visited,row,col,i,j,word,0)){
            return true;
          }
        }
      }
    }
    return false;
  }
  bool isInBoundary(int row, int col, int rows, int cols){
    if(row >= rows || row < 0 || col >= cols || col < 0) return false;
    return true;
  }
  bool SearchAround(vector<vector<char>>& board,vector<vector<bool>> visited,int row,int col,int i,int j,string word,int t){
    bool left= false,right= false,up= false,down= false;
    if(word[t]=='\0'){
      return true;
    }
    if(isInBoundary(i,j,row,col)){
      if(board[i][j]==word[t]&&!visited[i][j]){
        visited[i][j]= true;
        if(SearchAround(board,visited,row,col,i+1,j,word,t+1))return true;
        else if(SearchAround(board,visited,row,col,i,j+1,word,t+1))return true;
        else if(SearchAround(board,visited,row,col,i-1,j,word,t+1))return true;
        else if(SearchAround(board,visited,row,col,i,j-1,word,t+1))return true;
        visited[i][j]= false;
      }
    }
    return false;

  }
};
int test1(vector<vector<int>>& board){
  board[0][0]=0;
  board[0][1]=0;
  board[0][2]=0;
}
int test2(vector<vector<int>>& board){
  printf("%d-%d,%d",board[0][0],board[0][1],board[0][2]);
}
int testmain(vector<vector<int>>& board){
  test1(board);
  test2(board);
}
int main() {
  int i=0,j=0;
  //[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
  vector<vector<char>> board(3);
  for(i=0;i<3;i++){
    board[i].resize(3);
  }
          //[["C","A","A"],
          //["A","A","A"],
          //["B","C","D"]]
  board[0][0]='C';
  board[0][1]='A';
  board[0][2]='A';

  board[1][0]='A';
  board[1][1]='A';
  board[1][2]='A';

  board[2][0]='B';
  board[2][1]='C';
  board[2][2]='D';
  string word="";
  Solution s;
  bool b=s.exist(board,word);
  printf("%d",b);
  return 0;
}