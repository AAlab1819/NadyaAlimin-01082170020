#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> nameList;
    string newName; //declare the name using string
    int numReq;
    cin>>numReq; // input the number of the requests

    for (int i=0; i<numReq; i++)
    {
            cin>>newName;

            if(nameList[newName]==0) // if the name is not registered
            {
                nameList[newName]=1; // add the name to the list
                cout<<"OK"<<endl;
            }
            else { // if it is already registered
                cout<<newName<<nameList[newName]<<endl;
                nameList[newName]++; // add the number of the number
            }
    }
    return 0;
}
