#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
   stack<char> st;

   for (auto x : s)
   {
      if (st.empty())
      {
         st.push(x);
      }
      else if (x == '{' || x == '[' || x == '(')
         st.push(x);
      else if (x == ')')
      {
         if (st.top() == '(')
            st.pop();
         else
            return false;
      }
      else if (x == '}')
      {
         if (st.top() == '{')
            st.pop();
         else
            return false;
      }
      else if (x == ']')
      {
         if (st.top() == '[')
            st.pop();
         else
            return false;
      }
   }
   if (st.size() == 0)
      return true;
   return false;
}
int main()
{
   cout<<isValid("()()")<<endl;
   return 0;
}