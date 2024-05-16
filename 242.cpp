#include <bits/stdc++.h>
using namespace std;
bool solve(string s, string t)
{
   map<char, int> mp;
   for (auto x : s)
   {
      mp[x]++;
   }
   for (auto x : t)
   {
      mp[x]--;
   }
   for (auto x : mp)
   {
      if (mp[x.first] != 0)
         return false;
   }
   return true;
}
int main()
{
   cout << solve("rat", "tar") << endl;
   return 0;
}