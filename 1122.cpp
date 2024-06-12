#include <bits/stdc++.h>
using namespace std;
vector<int> relativeSortArray(vector<int> arr1, vector<int> arr2)
{
   // this will track the size of specific elements
   unordered_map<int, int> mp1;
   for (auto x : arr1)
      mp1[x]++;

   // for result
   vector<int> leftSide;
   vector<int> rightSide;

   // first we will insert the left side of the result based on the priority of arr2.
   for (int i = 0; i < arr2.size(); i++)
   {
      int temp = mp1[arr2[i]];
      while (temp--)
      {
         leftSide.push_back(arr2[i]);
      }
      mp1.erase(arr2[i]);
   }

   // we will find the remaining element in mp1 for rightSide.
   for (auto x : mp1)
   {
      int temp = x.second;
      while (temp--)
         rightSide.push_back(x.first);
   }

   // right side normal sort for remaining element.
   sort(rightSide.begin(), rightSide.end());

   leftSide.insert(leftSide.end(), rightSide.begin(), rightSide.end());
   return leftSide;

   //TC -> max( (rightSide.size()*log(rightSide.size())), arr1.size());
   //SC -> ~O(arr1.size());
}
int main()
{
   vector<int> res = relativeSortArray({2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19}, {2, 1, 4, 3, 9, 6});
   for (auto x : res)
   {
      cout << x << " ";
   }

   return 0;
}