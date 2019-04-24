#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	int t;
	while(scanf("%d",&t)!=EOF)
	{

		v.push_back(t);
		sort(v.begin(),v.end());
		if(v.size()%2==0)
		{
			cout << (v[v.size()/2] + v[(v.size()/2)-1])/2 << endl;
		}
		else
		{
			cout << v[v.size()/2] << endl;
		}
	}
}
