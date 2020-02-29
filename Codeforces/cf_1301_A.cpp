#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	string a,b,c;
	while(t--)
	{
		cin >> a >> b >> c;

		bool is_good = 1;

		for(int i=0;i<a.size();i++)
		{
			if(a[i]!=c[i] && b[i]!=c[i])
			{
				is_good = 0;
			}
		}

		if(is_good) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}