#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s)
{
   map<char, int> mp;
   int flag = 0;
   for (auto x : s)
   {
      mp[x]++;
   }
   int twiceChar = 0;
   for (auto x : mp)
   {
      if (x.second % 2 == 1)
      {
         flag = 1;
      }
      if (x.second > 1)
      {
         if (x.second % 2 == 0)
         {
            twiceChar += x.second;
         }
         else
         {
            twiceChar += x.second - 1;
         }
      }
   }
   return twiceChar + flag;
}
int main()
{
   cout<<longestPalindrome("abccccdd")<<endl;
   return 0;
}