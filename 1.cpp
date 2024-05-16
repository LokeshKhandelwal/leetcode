#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> nums, int target)
{  
   map<int,int> m;
   for(int i = 0;i<nums.size();i++){
      if(m.find(target-nums[i]) != m.end()){
         return {m[target-nums[i]],i};
      }
      else{
         m[nums[i]] = i;
      }
   }
   return {};
}
int main()
{
   vector<int> vec = {3,2,4};
   vec = twoSum(vec,6);
   for (auto x : vec)
   {
      cout << x << " ";
   }

   return 0;
}