#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000000 + 7;
long long modi(long long deno)
{
   long long exp = MOD - 2;
   long long res = 1;
   while (exp > 0)
   {
      if (exp % 2 == 1)
      {
         res = (res * deno) % MOD;
      }
      deno = (deno * deno) % MOD;
      exp /= 2;
   }
   return res;
}
long long solve(long long n, long long k)
{
   long long num = 1;
   long long deno = 1;
   for (long long i = 0; i < k; i++)
   {
      deno = (deno * (i + 1)) % MOD;
      num = (num * (n - i)) % MOD;
   }
   return (num * modi(deno)) % MOD;
}
int valueAfterKSeconds(int n, int k)
{
   return solve(n + k - 1, k);
}
int main()
{
   cout<<valueAfterKSeconds(4,5)<<endl;
   return 0;
}