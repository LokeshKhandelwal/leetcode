#include <bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> nums, int k)
{
   vector<int> ans;
   map<int,int> mp;
   for(auto x: nums){
      mp[x]++;
   }
   for(auto x: mp){
      cout<<x.first<<" "<<x.second<<endl;
      if(x.second >=k)ans.push_back(x.first);
   }
   return ans;
}
int main()
{
   vector<int> nums = solve({1,1,1,2,2,2,2,3},2);
   for (auto x : nums)
   {
      cout << x <<endl;
   }
   return 0;
}