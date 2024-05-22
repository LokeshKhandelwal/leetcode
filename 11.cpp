#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
   int i = 0,j = height.size()-1;
   int maxi = 0;
   while(i<j){
      maxi = max(maxi,min(height[i],height[j])*(j-i));
      if(height[i]<height[j])i++;
      else j--;
   }
   return maxi;
}
int main()
{
   vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
   cout << maxArea(height) << endl;
   return 0;
}