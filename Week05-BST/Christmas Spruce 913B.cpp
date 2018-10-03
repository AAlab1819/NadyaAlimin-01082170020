#include <bits/stdc++.h>
using namespace std;

struct tree
{
    int parent;
    int son;
};
tree T[1005];

int main()
{
   int n;
   int v[1005];

   memset(v, 0, sizeof(v));

   for (int i=0; i<1005; i++)
   {
       T[i].parent = 0;
       T[i].son = 0;
   }

   cin>>n; // input the number of the vertices in the tree
   int x;
   for (int i=2; i<=n; i++)
   {
       cin>>x; // the parent of the i+1-th vertex
       if(!v[x]) // if the vertex has no child
       {
           T[T[x].parent].son--;
           v[x] = 1;
       }
       T[i].parent = x;
       T[x].son++;
   }
   int flag = 0; // to check the child
   for (int i = 1; i<=n; i++)
   {
       // if more then 0 and less than 3
       if ((T[i].son && T[i].son < 3)||(v[i] && T[i].son < 3))
       {
           flag=1;
           break;
       }
   }
   if(flag) // if the tree is not a spruce
    cout<<"No"<<endl;
   else
    cout<<"Yes"<<endl;

   return 0;
}
