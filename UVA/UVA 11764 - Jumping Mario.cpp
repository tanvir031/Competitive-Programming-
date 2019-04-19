#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	
	for(int i=0;i<n;i++)
	{
		int x;
		vector <int> v,s;
		cin >> x;

		for(int t=0;t<x;t++)
		{
			int k;
			cin >> k;
			v.push_back(k);
		}


		if(x==1)
		{
			printf("Case %d: %d %d\n",i+1,0,0 );
			continue;
		}
		int sum1=0,sum2=0;
		for(int t=0;t<x-1;t++)
		{
			if((v[t+1]-v[t])>0) sum1++;
			else if((v[t+1]-v[t])<0) sum2++;
		}

		printf("Case %d: %d %d\n",i+1,sum1,sum2 );


	}
	return 0;

} 