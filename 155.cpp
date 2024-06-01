#include <bits/stdc++.h>
using namespace std;
class MinStack
{
public:
   stack<int> st;
   stack<int> stMin;

   MinStack() {}

   void push(int val)
   {
      st.push(val);
      if (stMin.empty())
         stMin.push(val);
      else
      {
         int temp = stMin.top();
         stMin.push(min(temp, val));
      }
   }

   void pop()
   {
      if (!st.empty() && !stMin.empty())
      {
         st.pop();
         stMin.pop();
      }
   }

   int top()
   {
      return st.top();
   }

   int getMin()
   {
      return stMin.top();
   }
};

int main()
{
   MinStack *ms = new MinStack();
   ms->push(-2);
   ms->push(0);
   ms->push(-4);
   ms->push(-3);
   cout << ms->getMin() << endl;
   ms->pop();
   ms->pop();
   cout << ms->top() << endl;
   cout << ms->getMin() << endl;
   return 0;
}