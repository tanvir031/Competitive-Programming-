#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
while(t--)
{
	unsigned long long n,k;
	cin >> n >> k;

	unsigned long long  r=0;
	
	while(n!=0)
	{
		if(n%k==0)
		{
			n = n/k;
			r++;
		}
		else
		{
			unsigned long long x = k*(n/k);
			r +=  (n - x);
			n = k * (n/k);
		}

	}
	cout << r << endl;
}	
	return 0;
}