#include <bits/stdc++.h>
using namespace std;

int a[1111111];
int n; // declare the number of the secretaries
int p(0); // declare the pairs of the chatting secretaries;
int c(0); // declare the counter of many pairs of the chatting secretaries;
int gap; // declare the gap because I use shell sort

int main()
{
    gap = n/2;

    cin >> n; // input the first line, the number of the secretaries
    for (int i=0; i<n; i++)
        cin >> a[i]; // input the second line, number of the call session

    for (int i=gap; i<n; i++)
    {
        // declare int temp for temporary number
        // add a[i] to the elements that have been gap sorted
        int temp=a[i];
        for(int j=i; j>=gap && a[j-gap] > temp; j--)
          {
              a[j] = a[j-gap];
              a[j] = temp; // put temp in its correct location

          }

       // a[j] = temp; // put temp in its correct location

    }

    for (int i=0; i<n; i++)
    {
        if(a[i]!=0)
            {
                p=1;
                for(int j=i+1; j<n; j++)
                    if(a[i]==a[j]) p++;
                    if(p>2)
                        {
                            c=-1;
                            break;
                        }
                    if(p==2) c++;
            }

    }
    cout << c;

    return 0;
}
