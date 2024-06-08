#include <bits/stdc++.h>
using namespace std;
bool checkSubarraySum(vector<int> nums, int k)
{
   int n = nums.size();
   map<int, int> mp;
   mp[0] = -1;
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum += nums[i];
      if (mp.find(sum % k) != mp.end())
      {
         if (i - mp[sum % k] >= 2)
            return true;
      }
      else
      {
         mp[sum % k] = i;
      }
   }
   return false;

   // int n = nums.size();
   // for(int i = 0;i<n;i++){
   //     long long int sum = nums[i];
   //     for(int j = i+1;j<n;j++){
   //         sum += nums[j];
   //         if(sum%k == 0)return true;
   //     }
   // }
   // return false;
}
int main()
{
   cout<<checkSubarraySum({23,2,4,6,7},6)<<endl;
   return 0;
}