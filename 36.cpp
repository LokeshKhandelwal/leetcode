#include <bits/stdc++.h>
using namespace std;
bool horizontal(vector<vector<char>> &board)
{
   for (auto x : board)
   {
      set<char> s;
      for (auto y : x)
      {
         if (y != '.')
         {
            if (s.find(y) != s.end())
            {
               return false;
            }
            s.insert(y);
         }
      }
   }
   return true;
}
bool vertical(vector<vector<char>> &board)
{
   for (int j = 0; j < board[0].size(); j++)
   {
      set<char> s;
      for (int i = 0; i < board.size(); i++)
      {
         if (board[i][j] != '.')
         {
            if (s.find(board[i][j]) != s.end())
            {
               cout << i << " " << j << endl;
               return false;
            }
            s.insert(board[i][j]);
         }
      }
   }
   return true;
}
bool square(vector<vector<char>> &board)
{
   for (int i = 0; i < board.size(); i += 3)
   {
      for (int j = 0; j < board[0].size(); j += 3)
      {
         set<char> s;
         for(int x = i;x<i+3;x++){
            for(int y = j;y<j+3;y++){
               if(board[x][y] != '.'){
                  if(s.find(board[x][y]) != s.end())return false;
                  s.insert(board[x][y]);
               }
            }
         }
      }
   }
   return true;
}
bool isValidSudoku(vector<vector<char>> &board)
{
   return vertical(board) && horizontal(board) && square(board);
}
int main()
{
   vector<vector<char>> board = {{'8', '3', '.', '.', '7', '.', '.', '.', '.'},
                                 {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                 {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                 {'2', '.', '.', '.', '6', '.', '.', '.', '3'},
                                 {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                 {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                 {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                 {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                 {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
   cout << isValidSudoku(board) << endl;
   return 0;
}