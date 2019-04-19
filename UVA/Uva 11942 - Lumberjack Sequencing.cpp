#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	cout << "Lumberjacks:" << endl;
	for(int i=0;i<n;i++)
	{
		vector <int> v;
		vector <int> s1;
		vector <int> s2;
		for(int j=0;j<10;j++)
		{
			int t;
			cin >> t;
			v.push_back(t);
		}

		s1 = v;
		s2 = v;

		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		reverse(s2.begin(),s2.end());

		if(v==s1 || v==s2) cout << "Ordered" << endl;
		else cout << "Unordered" << endl;
	}
	return 0;

} 