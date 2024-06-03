#include <bits/stdc++.h>
using namespace std;
int appendCharacters(string s, string t)
{
   int i = 0, j = 0;
   while (i < t.size() && j < s.size())
   {
      if (t[i] == s[j])
      {
         i++;
         j++;
      }
      else
         j++;
   }
   return t.size() - i;
}
int main()
{
   cout<<appendCharacters("coaching","coding")<<endl;
   return 0;
}