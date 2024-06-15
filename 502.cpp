#include <bits/stdc++.h>
using namespace std;
int findMaximizedCapital(int k, int w, vector<int> profits,
                         vector<int> capital)
{
   vector<pair<int,int>> projects;
   for(int i = 0;i<profits.size();i++){
      projects.push_back({capital[i],profits[i]});
   }
   sort(projects.begin(),projects.end());

   priority_queue<int> mh;
   int i = 0;
   while(k--){
      while(i<profits.size() && projects[i].first <= w ){
         mh.push(projects[i].second);
         i++;
      }
      if(!mh.empty())break;

      w += mh.top();
      mh.pop();
   }
   return w;


   // int res = 0;
   // int wInstance = w;
   // vector<bool> used(profits.size(), false);
   // while (k--)
   // {
   //    int wInstanceIDX = -1;
   //    int pInstanceMax = 0;
   //    for (int i = 0; i < profits.size(); i++)
   //    {
   //       if (capital[i] > wInstance || used[i] == true)
   //          continue;
   //       if (pInstanceMax < profits[i])
   //       {
   //          wInstanceIDX = i;
   //          pInstanceMax = profits[i];
   //       }
   //    }
   //    if (wInstanceIDX == -1)
   //       break;
   //    wInstance += profits[wInstanceIDX];
   //    used[wInstanceIDX] = true;
   // }
   // return wInstance;
}
int main()
{
   cout << findMaximizedCapital(2, 0, {1, 2, 3}, {0, 1, 1}) << endl;
   return 0;
}