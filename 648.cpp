#include <bits/stdc++.h>
using namespace std;
string replaceWords(vector<string> dictionary, string sentence)
{

   int n = sentence.size();
   set<string> mp;
   string res = "";

   string temp = res;
   for (auto x : dictionary)
   {
      mp.insert(x);
   }

   for (int i = 0; i < sentence.size(); i++)
   {
      if (sentence[i] == ' ')
      {
         res += temp;
         res += ' ';
         temp = "";
         continue;
      }
      temp += sentence[i];
      if (mp.find(temp) != mp.end())
      {
         while (i < sentence.size() && sentence[i] != ' ')
         {
            i++;
         }
         i--;
      }
   }
   res += temp;
   return res;
}
int main()
{
   string str = replaceWords({"cat","bat","rat"},"the cattle was rattled by the battery");
   cout<<str<<endl;
   return 0;
}