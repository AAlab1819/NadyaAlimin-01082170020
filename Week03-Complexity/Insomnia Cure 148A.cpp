#include <bits/stdc++.h>
using namespace std;

int main()
{
   int k;
   int l;
   int m;
   int n;
   int d;
   int damagedDragon = 0;

   cin>>k>>l>>m>>n>>d;

   if (k==1 || l==1 || m==1 || n==1)
        damagedDragon=d;
   else
   {

       for (int i=1; i<=d; i++)
        {
            if (i%k==0 || i%l==0 || i%m==0 || i%n==0)
                damagedDragon++;
        }
   }
   cout<<damagedDragon<<endl;

   return 0;
}
