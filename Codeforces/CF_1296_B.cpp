#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin >> t;

	long long n;

	while(t--)
	{
		cin >> n;

		long long r=0;
		long long x = n;
		long long result = 0;

		while(1)
		{

			r += n%10;
			result += n/10;
			n = n/10;
			if(n<1) break;

		}

		cout << r/10 + result + x  << endl;
	}

	return 0;
}