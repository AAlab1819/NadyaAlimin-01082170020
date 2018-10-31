#include<bits/stdc++.h>
using namespace std;

int main()
{
    // declare variables
    long long int n, questNum, l, r, type;
    long long int stoneCost;
    long long int m;

    cin>>n;
    long long int cost[n], sortedCost[n], usedSortedCost[n];

    for (int i=0; i<n; i++) {
        cin>>stoneCost;
        cost[i]=cost[i-1]+stoneCost;

        // copy the number to array that will be sorted
        sortedCost[i]=stoneCost;
        usedSortedCost[i]=stoneCost;
    }

    // sort the array in increasing number
    sort(sortedCost, sortedCost+n);
    sort(usedSortedCost, usedSortedCost+n);

    usedSortedCost[0]=sortedCost[0];
    for (int i=1; i<n; i++) {
        usedSortedCost[i]=usedSortedCost[i-1]+sortedCost[i];
    }

    cin>>questNum;
    for (int i=0; i<questNum; i++)
    {
        cin>>type>>l>>r;
        // if it is type 1
        if (type==1)
        {
            m=cost[r-1]-cost[l-2];
            cout<<m<<endl;
        }
        // if it is type 2
        else
        {
            // if the left boung is 1
            if (l==1)
                m=usedSortedCost[r-1];
            else
                m=usedSortedCost[r-1]-usedSortedCost[l-2];
            cout<<m<<endl;
        }
    }
    return 0;
}
