   #include <bits/stdc++.h>
using namespace std;
int solve(vector<int> people, int limit) {
   sort(begin(people),end(people));
   int ans = 0;
   int temp = 0;
   int i = 0, j = people.size()-1;
   while(i<=j){
      if(people[i] + people[j] <= limit){
         ans++;
         i++;
         j--;
      }
      else{
          j--;
          ans++;
      }
   }
   return ans;
}
int main(){
   vector<int> vec = {1,2};
   cout<<solve(vec,3)<<endl;
   return 0;
}