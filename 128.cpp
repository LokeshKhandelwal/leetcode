#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
   if (nums.size() == 1)
   {
      return nums[0];
   }
   else if(nums.size()==0)return 0;
   set<int> s;
   for (auto x : nums)
      s.insert(x);
   int maxi = 1;
   int temp = 1;
   int counter = *s.begin();
   for (auto x = next(s.begin()); x != s.end(); x++)
   {
      if (counter + 1 == *x)
      {
         temp++;
         counter++;
      }
      else
      {
         maxi = max(maxi, temp);
         temp = 1;
         counter = *x;
      }
   }
   maxi = max(maxi, temp);
   return maxi;
}
int main()
{
   vector<int> nums = {2, 1, 4, 3,7,5};
   cout << longestConsecutive(nums) << endl;
   return 0;
}