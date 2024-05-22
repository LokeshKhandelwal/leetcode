#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
   set<vector<int>> s;
   vector<vector<int>> res;
   sort(nums.begin(), nums.end());
   for (int i = 0; i < nums.size() - 2; i++)
   {
      int left = i + 1;
      int right = nums.size() - 1;
      while (left < right)
      {
         if (nums[left] + nums[right] + nums[i]== 0)
         {
            s.insert({nums[i], nums[left], nums[right]});
            break;
         }
         else if(nums[left] + nums[right] + nums[i] < 0)left++;
         else right--;
      }
   }
   for(auto x: s){
      res.push_back(x);
   }
   return res;
}
int main()
{
   vector<int> nums = {-1, 0, 1, 2, -1, -4};
   vector<vector<int>> res = threeSum(nums);
   for (auto x : res)
   {
      for (auto y : x)
      {
         cout << y << " ";
      }
      cout << endl;
   }
   return 0;
}