#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	vector < pair <int,int> > v;
	int a,b,n;
	while(t--)
	{
		cin >> n;

		vector <int> v1,v2;
		for(int i=0;i<n;i++)
		{
			cin >> a >> b;
			v1.push_back(a);
			v2.push_back(b);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());

		if(n>1)
			cout <<  max(0,-1 *(v2[0] - v1[v1.size()-1])) << endl;
		else 
			cout << 0 << endl;
	}

	
	return 0;
}