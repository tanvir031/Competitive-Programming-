#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin >> n >> m;

	map <int,int> map1;
	for(int i=1;i<=m;i++)
	{
		map1[i] = -1;
	}

	int x;

	for(int i=0;i<n;i++)
	{
		cin >> x;

		for(int j=0;j<x;j++)
		{
			int l;
			cin >> l;

			map1[l] = 1;
		}
	}

	for(int i=1;i<=m;i++)
	{
		if(map1[i]!=1){
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
}