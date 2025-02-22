#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> num;
   for (int i = 0; i < num.size(); i++)
   {
      int ele;
      cin >> ele;
      num.push_back(ele);
   }
   for (int i : num)
   {
      cout << num[i];
   }

   return 0;
}