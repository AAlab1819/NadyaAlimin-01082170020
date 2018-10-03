#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int Employees;
    cin>>Employees;

    int Manager[Employees];
    for (int i=1; i<=Employees; i++)
        cin>>Manager[i];

    int groups(0);
    for (int i=1; i<=Employees; i++)
    {
        int tmp=0;
        for(int j=i; j<=Employees && j!= -1; j=Manager[j]) // to check the boss that is not theirselves
        {
            tmp++;
        }
        groups=max(groups, tmp); // to know how many groups needed
    }
    cout<<groups<<endl;

    return 0;
}
