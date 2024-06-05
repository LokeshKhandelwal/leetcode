#include <bits/stdc++.h>
using namespace std;
vector<string> commonChars(vector<string> &words)
{
   vector<map<char, int>> hashMap;
   for (auto x : words)
   {
      map<char, int> mp;
      for (auto y : x)
      {
         mp[y]++;
      }
      hashMap.push_back(mp);
   }

   vector<string> res;
   map<char, int> startMp = hashMap[0];

   for (auto x = hashMap.begin() + 1; x != hashMap.end(); ++x)
   {
      for (auto it : startMp)
      {
         char c = it.first;
         if (x->find(c) != x->end())
         {
            startMp[c] = min(startMp[c], (*x)[c]);
         }
         else
         {
            startMp[c] = 0;
         }
      }
   }
   for (auto &x : startMp)
   {
      for (int i = 0; i < x.second; ++i)
      {
         res.push_back(string(1, x.first));
      }
   }

   return res;
}
int main()
{
   vector<string> words = {"bella","label","roller"};
   words = commonChars(words);
   for(auto x: words){
      cout<< x<<", ";
   }
   return 0;
}