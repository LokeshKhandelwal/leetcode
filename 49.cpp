#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> solve(vector<string> strs)
{
   map<map<char,int>,vector<string>> mp2d;

   for(int i = 0;i<strs.size();i++){
      map<char,int> mp;
      for(auto x: strs[i]){
         mp[x]++;
      }
      if(mp2d.find(mp) != mp2d.end()){
         mp2d[mp].push_back(strs[i]);
      }
      else{
         mp2d[mp] = {strs[i]};
      }
   }
   vector<vector<string>> ans;
   for(auto x: mp2d){
      ans.push_back(x.second);
   }
   return ans;
}
int main()
{
   vector<vector<string>> strsi = solve({"eat", "tea", "tan", "ate", "nat", "bat"});
   for (auto x : strsi)
   {
      for (auto s : x)
      {
         cout << s << " ";
      }
      cout << endl;
   }
   return 0;
}