#include <bits/stdc++.h>
using namespace std;

// function of sort
void strengthSort(int arr[], int ar[], int n)
{
    int index = 0;

    while (index < n) {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            swap(arr[index], arr[index - 1]);
            swap(ar[index], ar[index - 1]);
            index--;
        }
    }
    return;
}

int main()
{
    int KiritoStrength; // declare Kirito's strength
    int numDragon; // declare the dragons that Kirito's got to defeat
    cin>>KiritoStrength>>numDragon;

    int DragonStrength[numDragon]; // deckare the dragon's strength
    int bonusStrength[numDragon]; // declare the bonus strength

    for(int i=0; i<numDragon; i++)
    {
        cin>>DragonStrength[i]>>bonusStrength[i];
    }

    strengthSort(DragonStrength, bonusStrength, numDragon); // call the function to sort the strength and bonus

    for (int i = 0; i<numDragon; i++)
    {
        // to check whether Kirito's strength is greater than dragon's
        if(KiritoStrength>DragonStrength[i])
            {
                KiritoStrength = KiritoStrength + bonusStrength[i];
            }
        else
           {
                KiritoStrength = 0;
                break;
           }
    }

    // check whether Kirito is win or lose
    if (KiritoStrength>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
