#include <bits/stdc++.h>
using namespace std;
bool isNStraightHand(vector<int> hand, int groupSize)
{
   if (hand.size() % groupSize != 0)
      return false;

   sort(hand.begin(), hand.end());
   int totalPair = hand.size() / groupSize;
   for (int i = 0; i < hand.size(); i++)
   {
      if (hand[i] != -1)
      {
         int counter = hand[i];
         hand[i] = -1;
         int pair = 1;
         int j = i + 1;
         while (pair != groupSize && j < hand.size())
         {
            if (counter + 1 == hand[j])
            {
               counter++;
               pair++;
               hand[j] = -1;
               j++;
            }
            else
            {
               j++;
            }
         }
         if (pair != groupSize)
         {
            return false;
         }
      }
   }

   return true;
}
int main()
{
   cout<<isNStraightHand({1,2,3,6,2,3,4,7,8},3)<<endl;
   return 0;
}