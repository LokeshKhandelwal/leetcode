#include <bits/stdc++.h>
using namespace std;
string encode(vector<string> &strs)
{  
   string s = "";
   for(auto x: strs){
      s += x;
      s += "`";
   }
   return s;
}

vector<string> decode(string s)
{
   vector<string> strs;

   string counter = "";
   for(auto x: s){
      if(x != '`'){
         counter += x;
      }
      else{
         strs.push_back(counter);
         counter = "";
      }
   }
   return strs;
}
int main()
{
   vector<string> strs = {"neet", "code", "love", "you"};
   string s = encode(strs);
   cout<<s<<endl;

   for(auto x:strs){
      cout<<endl<<x;
   }
   return 0;
}