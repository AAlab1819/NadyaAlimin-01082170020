#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numerator;      // declare the numerator
    int sum;            // declare the sum of numerator and denominator

    cin >> sum;         // input the sum of numerator and denominator

    numerator = sum/2;     // the sum is divided by 2 to get the numerator

    while(__gcd(sum-numerator, numerator) > 1)
    {
        numerator--;
    }

    cout << numerator << " " << sum-numerator;

    return 0;
}

