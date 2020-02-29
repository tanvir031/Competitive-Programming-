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
		vector <long long> v(n);
		for(int i=0;i<n;++i)
		{
			cin >> v[i];
		}

		long long pos = -1,neg = n;
		for(int i=0;i<n;++i)
		{
			if(v[i] < i) break;
				pos = i;
		}

	
		for(int i=n-1;i>=0;--i)
		{
			if(v[i] < (n-1)-i) break;
			neg = i;
		}
		if(neg <= pos) cout << "YES" << endl;
		else cout << "NO" << endl;

		//cout << pos << " " << neg << endl;

	}
	return 0;
}
