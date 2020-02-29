#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	long long n1,n2;
	while(t--)
	{
		
		cin >> n1 >> n2;

		cout << (long long)log10(n2+1) * n1 << endl; 

	}
	return 0;
}
