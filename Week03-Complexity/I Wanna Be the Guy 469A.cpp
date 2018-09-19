#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y,arr[1001], a;
    cin>>n; // input n levels of the game

    cin>>x; // input how many levels that little X can pass
    for(int i=0; i<x; i++)
    {
        cin>>a;
        arr[a]=1;
    }

    cin>>y; // input how many levels that little Y can pass
    for(int i=0; i<y; i++)
    {
        cin>>a;
        arr[a]=1;
    }

    bool OK = true;
    for(int i=1; i<=n; i++)
    {
        if(arr[i] != 1){
            OK = false;
            break;
        }
    }

    if(OK)
        cout << "I become the guy." << endl;
    else
    cout << "Oh, my keyboard!" << endl;

    return 0;
}
