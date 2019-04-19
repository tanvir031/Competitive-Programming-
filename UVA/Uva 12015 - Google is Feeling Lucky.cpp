#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;


	for(int i2=0;i2<t;i2++)
	{
		vector < pair<int,string> > v;
		printf("Case #%d:\n",i2+1);

		for(int i=0;i<10;i++)
		{
			pair <int , string> p;
			string s;
			int n;

			cin >> s;
			cin >> n;
			p.first = n;
			p.second = s;

			v.push_back(p);
		}
		vector <string> r;
		int max = 0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i].first>max) max = v[i].first;
		}

		for(int i=0;i<v.size();i++)
		{
			if(v[i].first==max) cout << v[i].second << endl;
		}





	}
	return 0;

}
