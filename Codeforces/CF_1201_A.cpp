#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;

	vector <string> v;
	vector <int> score;

	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}

	for(int i=0;i<m;i++)
	{
		int t;
		cin >> t;
		score.push_back(t);
	}
	map <char,int> mp;
	map <char,int>::iterator it;

	long long result = 0;
	for(int i=0;i<m;i++)
	{
		int maximum = 1;
		for(int j=0;j<n;j	++){
			mp[v[j][i]]++;
		}
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second>=maximum) maximum = it->second;
		}
		result += score[i]*maximum;
		mp.clear();
	}

	cout << result << endl;


	return 0;
}
