#include <bits/stdc++.h>
using namespace std;
string incrementOne(string s)
{
   // 111 -> 1000
   // 10111 -> 11000
   // 10010 -> 10011

   if (s[s.size() - 1] == '0')
   {
      s[s.size() - 1] = '1';
      return s;
   }

   int carry = 1;
   s[s.size() - 1] = '0';
   int i = s.size() - 2;
   while (carry && i >= 0)
   {

      if (s[i] == '0')
      {
         s[i] = '1';
         carry = 0;
      }
      else
      {
         s[i] = '0';
         carry = 1;
         i--;
      }
   }
   if (carry == 1)
   {
      s.insert(s.begin(), '1');
   }
   return s;
}
int numSteps(string s)
{

   int steps = 0;
   while (s.size() != 1)
   {
      if (s[s.size() - 1] == '0')
      {
         s.pop_back();
      }
      else
      {
         s = incrementOne(s);
         s.pop_back();
         steps++;
      }
      steps++;
   }
   return steps;
}
int main()
{
   cout<<numSteps("1101")<<endl;
   cout<<numSteps("1111110011101010110011100100101110010100101110111010111110110010")<<endl;
   return 0;
}