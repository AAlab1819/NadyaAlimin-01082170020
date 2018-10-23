#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lengthName, minRemovedNum(0), a(0);
    string fileName;
    cin>>lengthName>>fileName;
    for(int i=0; i<lengthName; i++)
    {
        if(fileName[i]=='x') // if the file name contain 'x'
        {
            a++; //  count the x
            if(a>2)
                minRemovedNum++;
        }
        else
            a=0; // if the file name doesn't have 'x' more than 3
    }
    cout<<minRemovedNum<<endl;
    return 0;
}

