#include <bits/stdc++.h>
using namespace std;
int getSum(vector<int>& nums, int i, int sum){
   if(i>= nums.size())return sum;
   int take = getSum(nums,i+1, sum^nums[i]);
   int notTake = getSum(nums,i+1,sum);
   return take + notTake;
}
int solve (vector<int>& nums){
   return getSum(nums,0,0);
}
int main(){

   vector<int> nums = {3,4,5,6,7,8};
   cout<<solve(nums)<<endl;
   return 0;
}