#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	int n;
	while(t--)
	{
		vector <int> v;
		set <int> s,t;
		cin >> n;
		long long sum = 0;
		for(int i=0;i<n;i++)
		{
			int l;
			cin >> l;
			v.push_back(l);
			if(l%2==1) s.insert(l);
			else t.insert(l);
			sum += l;
		}

		if(sum%2==1) cout << "YES" << endl;
		else if(t.size()>=1 && s.size()>=1) cout << "YES" << endl;
		else cout << "NO" << endl;



	}
	return 0;
}