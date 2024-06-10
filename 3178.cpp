#include <bits/stdc++.h>
using namespace std;
int numberOfChild(int n, int k)
{
   int i = 0;
   int flag = true;
   while (k--)
   {
      if (flag)
      {
         i++;
         if (i == n - 1)
         {
            flag = false;
         }
      }
      else
      {
         i--;
         if (i == 0)
            flag = true;
      }
   }
   return i;
}
int main()
{
   cout << numberOfChild(4, 2) << endl;
   return 0;
}