#include <bits/stdc++.h>
using namespace std;

void gnomeSort(int arr[], int n)
{
    int index = 0;

    while (index < n) {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            swap(arr[index], arr[index - 1]);
            index--;
        }
    }
    return;
}

int main()
{
    int n, l;
    double d(0);
    cin>>n>>l;
    int ar[n];

    for (int i=0; i<n; i++)
        cin>>ar[i];

    gnomeSort(ar, n);
    for(int i=1;i<n;i++){
        if((ar[i]-ar[i-1]) > d)
            d = ar[i] - ar[i-1];
    }

    d = d/2;
    if(ar[0]>d)
        d=ar[0];

    if(l-ar[n-1] > d){
        d = l-ar[n-1];
    }

    cout<<fixed<<setprecision(10)<<d;

    return 0;
}
