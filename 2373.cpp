#include <bits/stdc++.h>
using namespace std;
int find(vector<vector<int>>& mat, int i,int j){
   int maxi = 0;
   for(int x = i; x<=i+2;x++){
      for(int y = j;y<=j+2;y++){
         maxi = max(mat[x][y],maxi);
      }
   }
   return maxi;
}
vector<vector<int>> solve(vector<vector<int>>& mat){
   int n = mat.size()-2;
   vector<vector<int>> ans;

   for(int i = 0;i<n;i++){
      vector<int> row;
      for(int j = 0;j<n;j++){
         int temp = find(mat,i,j);
         row.push_back(temp);
      }
      ans.push_back(row);
   }
   return ans;
}

int main(){
   vector<vector<int>> mat = {{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
   vector<vector<int>> ans = solve(mat);
   for(auto x: ans){
      for(auto y: x){
         cout<<y<<" ";
      }
      cout<<endl;
   }
   return 0;
}