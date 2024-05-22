#include <bits/stdc++.h>
using namespace std;
bool pallindrome(string s, int i, int j)
{
   while (i < j)
   {
      if (s[i] != s[j])
         return false;
      i++;
      j--;
   }
   return true;
}
void solve(int idx, string s, vector<string> &path, vector<vector<string>> &res)
{
   if (idx == s.size())
      res.push_back(path);
   else
   {
      for (int i = idx; i < s.size(); i++)
      {
         if(pallindrome(s,idx,i)){
            string substr = s.substr(idx,i-idx+1);
            path.push_back(substr);
            solve(i+1,s,path,res);
            path.pop_back();
         }
      }
   }
}
vector<vector<string>> partition(string s)
{
   vector<vector<string>> res;
   vector<string> path;
   solve(0, s, path, res);
   return res;
}
int main()
{
   string s = "aabb";
   vector<vector<string>> ans = partition(s);
   for (auto x : ans)
   {
      for (auto y : x)
      {
         cout << y << " ";
      }
      cout << endl;
   }
   return 0;
}