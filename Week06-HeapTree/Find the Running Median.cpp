#include <bits/stdc++.h>

using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // l = left
    int r = 2*i + 2; // r = right

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main()
{
    int number;
    double median;
    cin>>number;
    int runningList[number];
    for (int i=0; i<number; i++)
    {
        cin>>runningList[i];
        heapSort(runningList, i+1);

        //if even
        if ((i+1)%2==0)
        {
            median = runningList[i/2]+runningList[(i/2)+1];
            median/=2;
        }
        //if odd
        else{
            median = runningList[(i+1)/2];
        }

        cout<<fixed<<setprecision(1)<<median<<endl; //to print out decimals

    }


    return 0;
}
