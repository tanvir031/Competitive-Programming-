#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		long long x;
		cin >> x;

		if(x<14)
		{
			cout << "NO" << endl;
			continue;	
		}
		long long r = x/14;

		x -= (r-1)*14;

		if(x==20 || x==19 || x==18 || x==17 || x==16 || x==15)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}