#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
   int i = 0,j =s.size()-1;
   while(i<j){
      if(!isalnum(s[i])){
         i++;
         continue;
      }
      if(!isalnum(s[j])){
         j--;
         continue;
      }
      if(tolower(s[i]) != tolower(s[j]))return false;
      i++;
      j--;
   }
   return 1;
}
int main()
{
   string s = "A man, a plan, a canal: Panama";
   cout << isPalindrome(s) << endl;
   return 0;
}