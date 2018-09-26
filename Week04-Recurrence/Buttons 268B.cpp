#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numOfButtons;
    cin>>numOfButtons;
    int sum(0); // sum is the total try of how many times Manao has to try

    for(int i=0; i<numOfButtons; i++)
        sum+=1+(numOfButtons-i)*i; //
    cout<<sum<<endl;

}
