#include <bits/stdc++.h>
using namespace std;
int dp[2001][4005];
int solve(vector<int> &rewardValues, int i, int ans)
{
   if (i == rewardValues.size())
   {
      return ans;
   }
   if (dp[i][ans] != -1)
   {
      return dp[i][ans];
   }
   int notTake = solve(rewardValues, i + 1, ans);
   int take = 0;
   if (rewardValues[i] > ans)
   {
      ans += rewardValues[i];
      take = solve(rewardValues, i + 1, ans);
   }
   dp[i][ans] = max(take, notTake);
   return max(take, notTake);
}
int maxTotalReward(vector<int> rewardValues)
{
   int ans = 0;
   memset(dp, -1, sizeof(dp));
   sort(rewardValues.begin(), rewardValues.end());
   ans = max(ans, solve(rewardValues, 0, 0));

   return ans;
}
int main()
{
   cout<<maxTotalReward({1,1,3,3})<<endl;
   return 0;
}