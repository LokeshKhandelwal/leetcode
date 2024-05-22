#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> &height)
{
   int prefixTemp = 0;
   vector<int> prefix(height.size(), 0);
   int sufixTemp = 0;
   vector<int> sufix(height.size(), 0);
   for (int i = 0; i < height.size(); i++)
   {
      prefixTemp = max(prefixTemp, height[i]);
      prefix[i] = prefixTemp;
   }

   int ans = 0;
   for (int i = height.size() - 1; i >= 0; i--)
   {
      sufixTemp = max(sufixTemp, height[i]);
      sufix[i] = sufixTemp;
   }
   for (int i = 0; i < height.size(); i++)
   {
      ans += min(prefix[i], sufix[i]) - height[i];
   }
   return ans;
}
int main()
{
   vector<int> height= {0,1,0,2,1,0,1,3,2,1,2,1};
   cout<<trap(height)<<endl;
   return 0;
}