#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums, int k, int ind, unordered_map<int, int> &count)
{
   if (ind == nums.size())
   {
      return 1;
   }

   int notTake = solve(nums, k, ind + 1, count);

   int take = 0;
   if (count[nums[ind] - k] == 0 && count[nums[ind] + k] == 0)
   {
      count[nums[ind]]++;
      take = solve(nums, k, ind + 1, count);
      count[nums[ind]]--;
   }
   return take + notTake;
}
int beautifulSubsets(vector<int> &nums, int k)
{
   int ans = 0;
   unordered_map<int, int> count;
   ans = solve(nums, k, 0, count) - 1;
   return ans;
}
int main()
{  
   vector<int> nums = {2,4,6};
   cout<<beautifulSubsets(nums,2)<<endl;
   return 0;
}