#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums,int i,vector<int> temp,vector<vector<int>> &ans){
   if(i>= nums.size()){
      ans.push_back(temp);
      return;
   }
   solve(nums,i+1,temp,ans);
   temp.push_back(nums[i]);
   solve(nums,i+1,temp,ans);
   
}
vector<vector<int>> subsets(vector<int> &nums)
{
   vector<vector<int>> ans;
   solve(nums,0,{},ans);
   return ans;
}
int main()
{
   vector<int> nums = {1, 2, 3};
   vector<vector<int>> ans = subsets(nums);
   for (auto x : ans)
   {
      cout << "[ ";
      for (auto y : x)
      {
         cout << y << ", ";
      }
      cout <<"]"<< endl;
   }
   return 0;
}