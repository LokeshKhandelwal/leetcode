#include <bits/stdc++.h>
using namespace std;
double averageWaitingTime(vector<vector<int>> customers)
{
   int time = 0, wt = 0;

   for (int i = 0; i < customers.size(); i++)
   {
      int at = customers[i][0], ct = customers[i][1];
      if (i == 0)
      {
         time = at + ct;
         wt = ct;
         continue;
      }
      if (time < at)
      {
         time = at;
      }
      wt += time + ct - at;
      time += ct;
   }
   return (1.0) * (wt) / customers.size();
}
int main()
{
   cout<<averageWaitingTime({{5,2},{5,4},{10,3},{20,1}})<<endl;
   return 0;
}