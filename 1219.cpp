#include <bits/stdc++.h>
using namespace std;
int getSum(vector<vector<int>>& grid,int i,int j,int n,int m){
   if(i <0||i>=n || j<0 || j>=m) return 0;
   int left = grid[i][j] + getSum(grid,i,j-1,n,m);
   int right = grid[i][j] + getSum(grid,i,j+1,n,m);
   int top = grid[i][j] + getSum(grid,i-1,j,n,m);
   int bottom = grid[i][j] + getSum(grid,i+1,j,n,m);

   return max(max(top,bottom), max(left,right));
}
int solve(vector<vector<int>>& grid){
   int n = grid.size();
   int m = grid[0].size();
   int ans =0;
   for(int i = 0;i<n;i++){
      for(int j = 0;j<m;j++){
         if(grid[i][j] != 0){
            ans = max(ans,getSum(grid,i,j,n,m));
         }
      }
   }
   return ans;
}
int main(){
   vector<vector<int>> grid = {{0,6,0},{5,8,7},{0,9,0}};
   cout<<"Max Gold "<<solve(grid)<<endl;
   return 0;
}