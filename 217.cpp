#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> nums)
{
   set<int> s;
   for(auto x: nums)s.insert(x);
   return s.size() == nums.size() ? 0:1;
}
int main()
{
   cout << solve({1,2,3,4}) << endl;
   return 0;
}