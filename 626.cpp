#include <bits/stdc++.h>
using namespace std;
int maxProfitAssign(vector<int> diff, vector<int> profit, vector<int> worker){
   int res = 0;
   vector<pair<int,int>> combo;
   for(int i = 0;i<diff.size();i++){
      combo.push_back({diff[i],profit[i]});
   }
   sort(combo.begin(),combo.end());
   sort(worker.begin(),worker.end());
   int i = 0;
   int maxiW = 0;
   for(auto &w : worker){
      while(i<combo.size() && w>=combo[i].first){
         maxiW = max(maxiW, combo[i].second);
         i++;
      }
      res += maxiW;
   }
   return res;

}
int main(){
   cout<<maxProfitAssign({2,4,6,8,10},{10,20,30,40,50},{4,5,6,7})<<endl;
   return 0;
}