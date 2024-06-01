#include <bits/stdc++.h>
using namespace std;
int evalRPN(vector<string> tokens)
{
   stack<int> st;
   for (auto x : tokens)
   {
      if (x == "+")
      {
         int op2 = st.top();
         st.pop();
         int op1 = st.top();
         st.pop();
         st.push(op1 + op2);
      }
      else if (x == "-")
      {
         int op2 = st.top();
         st.pop();
         int op1 = st.top();
         st.pop();
         st.push(op1 - op2);
      }
      else if (x == "/")
      {
         int op2 = st.top();
         st.pop();
         int op1 = st.top();
         st.pop();
         st.push(op1 / op2);
      }
      else if (x == "*")
      {
         int op2 = st.top();
         st.pop();
         int op1 = st.top();
         st.pop();
         st.push(op1 * op2);
      }
      else
         st.push(stoi(x));
   }
   return st.top();
}
int main()
{
   cout << evalRPN({"2", "1", "+", "3", "*"}) << endl;
   return 0;
}