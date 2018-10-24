#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numSess;
    cin>>numSess;
    int order(0);
    int teams[numSess];

    for(int i=1;i<=numSess;i++)
        cin>>teams[i];

    for(int i=1; i<=numSess; i++)
    {
        if(teams[i]%2 && i!=numSess)
        {
            if(teams[i+1])
                teams[i+1]--;
            else
                order=1;
        }
        if(i==numSess && teams[i]%2)
           order=1;
        if(order)
            break;
        cout<<"x"<<endl;
    }
    if(order)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
