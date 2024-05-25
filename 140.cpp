#include <bits/stdc++.h>
using namespace std;
vector<string> wordBreakHelper(const string &s, int start, const unordered_set<string> &dict, unordered_map<int, vector<string>> &mp)
{
   if (mp.find(start) != mp.end())
      return mp[start];

   vector<string> validSubstr;

   if (start == s.length())
      validSubstr.push_back("");
   for (int end = start + 1; end <= s.length(); ++end)
   {
      string prefix = s.substr(start, end - start);
      if (dict.find(prefix) != dict.end())
      {
         vector<string> suffixes = wordBreakHelper(s, end, dict, mp);
         for (const string &suffix : suffixes)
         {
            validSubstr.push_back(prefix + (suffix.empty() ? "" : " ") + suffix);
         }
      }
   }

   mp[start] = validSubstr;
   return validSubstr;
}

vector<string> wordBreak(string s, vector<string> &wordDict)
{
   unordered_map<int, vector<string>> mp;
   unordered_set<string> dict(wordDict.begin(), wordDict.end());
   return wordBreakHelper(s, 0, dict, mp);
}

int main()
{
   string s = "catsanddog";
   vector<string> wordDict = {"cat", "cats", "and", "sand", "dog"};

   vector<string> res = wordBreak(s, wordDict);
   for (auto x : res)
   {
      cout << x << endl;
   }
   return 0;
}