#include<bits/stdc++.h>
using namespace std;


int studentNumber, studentSize, rate[100];
set<int>scores;
vector<int> result;

int main()
{
    cin>>studentNumber>>studentSize;
    for(int i=0;i<studentNumber;i++)
        {
            cin>>rate[i];scores.insert(rate[i]);
        }
    if(scores.size()<studentSize)
        cout<<"NO"<<endl;
    else
    {
        for(set<int>::iterator it=scores.begin();it!=scores.end();it++)
            for(int i=0;i<studentNumber;i++)

            if(rate[i] == *it) {

            result.push_back(i + 1);

            break;
        }
        cout<<"YES"<<endl;
        sort(result.begin(),result.end());
        for(int i=0;i<studentSize;i++)
        {cout<<result[i]<<" ";}
        cout<<endl;



    } return 0;
    }
