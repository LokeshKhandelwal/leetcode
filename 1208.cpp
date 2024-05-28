#include <bits/stdc++.h>
using namespace std;

int equalSubstring(string s, string t, int maxCost)
{
   int i = 0, j = 0;
   int ans = 0;
   int ansT = 0;
   int maxCostT = maxCost;
   while (i < s.size() && j < s.size())
   {
      maxCost -= abs(s[j] - t[j]);
      while (maxCost < 0)
      {
         maxCost += abs(s[i] - t[i]);
         i++;
      }
      ans = max(ans, j - i + 1);
      j++;
   }
   return ans;
   // int ans = 0;
   // for(int i = 0;i<s.size();i++){
   //     int maxCostT = maxCost;
   //     int ansT  = 0;
   //     for(int j = i;j<s.size();j++){
   //         if(abs(s[j]-t[j])<=maxCostT){
   //             maxCostT -= abs(s[j]-t[j]);
   //         }
   //         else break;
   //         ansT++;
   //     }
   //     ans = max(ans,ansT);
   // }
   // return ans;
}
int main()
{
   cout << equalSubstring("abcd","bcdf",3) << endl;
   return 0;
}