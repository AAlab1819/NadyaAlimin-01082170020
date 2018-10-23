#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b(0), c(0);
	cin>>n; // n is the number of elements in a
	for (int i=0; i<n; i++)
	{
		cin>>a; // a sequence of n integers
		if (a > 0) // positive numbers
			b += a;
		else // negative numbers
			c += a;
	}
	cout<<b-c<<endl;
	return 0;
}
