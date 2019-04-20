#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<int> v;

		int sum=0;

		for(int i=0;i<n;i++)
		{
			int k;
			cin >> k;
			sum += k;
			v.push_back(k);
		}

		double average = (double)sum/(double)v.size();

		int cnt = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if(v[i]>average) cnt++;
		}


		double x = (double)cnt/(double)(v.size())*100.00;
		printf("%.3lf%c\n",x,'%');
	}
}
