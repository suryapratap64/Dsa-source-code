#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n = 9;
   int a = 0, b = 1;
   for (int i = 1; i <= 9; i++)
   {
      int nn = a + b;
      cout << nn << " ";
      a = b;
      b = nn;
   }

   // continue
   for (int i = 0; i < 6; i++)
   {
      cout << "ram" << endl;
      cout << "surya " << endl;
      continue;
      cout << "start karo" << endl;
   }

   return 0;
}