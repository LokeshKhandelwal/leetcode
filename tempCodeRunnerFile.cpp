vector<int> res;
   int n = temperatures.size();
   for (int i = 0; i < n; i++)
   {
      int presentT = temperatures[i];
      int presentUpcoming = i;
      for (int j = i + 1; j < n; j++)
      {
         if (presentT < temperatures[j])
         {
            presentUpcoming = j;
            break;
         }
      }
      if (presentUpcoming == i)
         res.push_back(0);
      else
         res.push_back(presentUpcoming - i);
   }
   return res;