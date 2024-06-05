#include <bits/stdc++.h>
using namespace std;
void solve(int n, int i, vector<string> &res, string &row)
{
   if (i < 0)
   {
      return;
   }
   if (n == 0 && i == 0)
   {
      res.push_back(row);
      return;
   }
   if (n > 0)
   {
      row.push_back('(');
      solve(n - 1, i + 1, res, row);
      row.pop_back();
   }
   if (i > 0)
   {
      row.push_back(')');
      solve(n, i - 1, res, row);
      row.pop_back();
   }
}
vector<string> generateParenthesis(int n)
{
   vector<string> res;
   string row = "";
   solve(n, 0, res, row);
   return res;
}
int main()
{
   vector<string> res = generateParenthesis(2);
   for(auto x: res){
      cout<<x<<endl;
   }
   return 0;
}