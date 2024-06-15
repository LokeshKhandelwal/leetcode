#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& arr)
{
   int low = 0, mid = 0, high = arr.size() - 1;

   while (mid <= high)
   {
      switch (arr[mid])
      {
      case 0:
         swap(arr[low], arr[mid]);
         mid++;
         low++;
         break;
      case 1:
         mid++;
         break;
      case 2:
         swap(arr[mid], arr[high]);
         high--;
         break;
      }
   }
}
int main()
{  
   vector<int> arr = {2,0,2,1,1,0};
   sortColors(arr);
   for(auto x: arr){
      cout<<x<<", ";
   }
   return 0;
}