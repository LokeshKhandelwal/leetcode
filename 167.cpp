#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{
   int i = 0,j=numbers.size()-1;
   while(i<j){
      if(numbers[i] + numbers[j] == target)return {i+1,j+1};
      if(numbers[i] + numbers[j] < target) i++;
      else j--;
   }
   return {0,0};
}
int main()
{
   vector<int> numbers = {2, 7, 11, 15};
   vector<int> res = twoSum(numbers,9);
   for(auto x: res){
      cout<<x<<" ";
   }
   return 0;
}