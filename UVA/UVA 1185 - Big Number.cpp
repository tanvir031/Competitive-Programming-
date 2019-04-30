#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
        int a;
		cin >> a;

		double d = 0;

		for(int i=1;i<=a;i++)
		{
			d += log10(i);
		}
		cout << (int)d + 1 << endl;
	}

}
