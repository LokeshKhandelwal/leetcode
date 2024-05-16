#include <bits/stdc++.h>
using namespace std;
int solve(string v1, string v2)
{
   string NewV1 = "";
   for (int i = 0; i < v1.size(); i++)
   {
      string temp;
      while (v1[i] == '0' && i < v1.size())
         i++;
      while (v1[i] != '.' && i < v1.size())
      {
         temp.push_back(v1[i]);
         i++;
      }
      temp.push_back('.');
      NewV1.append(temp);
   }

   string NewV2 = "";
   for (int i = 0; i < v2.size(); i++)
   {
      string temp;
      while (v2[i] == '0' && i < v2.size())
         i++;
      while (v2[i] != '.' && i < v2.size())
      {
         temp.push_back(v2[i]);
         i++;
      }
      temp.push_back('.');
      NewV2.append(temp);
   }

   cout << "v1 " << NewV1 << endl;
   cout << "v2 " << NewV2 << endl;

   if (NewV2 == NewV1)
      return 0;

   for (int i = NewV1.size() - 1; i >= 0; i--)
   {
      if (NewV1[i] != '.')
         break;
      NewV1.pop_back();
   }
   for (int i = NewV2.size() - 1; i >= 0; i--)
   {
      if (NewV2[i] != '.')
         break;
      NewV2.pop_back();
   }
   int n1 = NewV1.size(), n2 = NewV2.size();
   cout << "v1 " << NewV1 << endl;
   cout << "v2 " << NewV2 << endl;

   int n1Dot = 0, n2Dot = 0;
   for (int i = 0; i < n1; i++)
   {
      if (NewV1[i] == '.')
         n1Dot++;
   }
   for (int i = 0; i < n2; i++)
   {
      if (NewV2[i] == '.')
         n2Dot++;
   }
   int i = 0, j = 0;
   while (i < n2 || j < n2)
   {
      string temp1 = "";
      string temp2 = "";
      while (NewV1[i] != '.' && i < n1)
      {
         temp1.push_back(NewV1[i]);
         i++;
      }
      i++;
      while (NewV2[j] != '.' && j < n2)
      {
         temp2.push_back(NewV2[j]);
         j++;
      }
      j++;
      cout << temp1 << " sd " << temp2 << endl;
      if (stoi(temp1) > stoi(temp2))
         return 1;
      else if (stoi(temp1) < stoi(temp2))
         return -1;
   }
   if (n1 > n2)
      return 1;
   else
      return -1;
}
int main()
{
   cout << "Hrllo" << endl;
   cout << solve("1.05", "1.1");
   return 0;
}