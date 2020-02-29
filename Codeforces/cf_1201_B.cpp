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
		vector <long long> v;

		long long x;
		long long total=0;
		long long cnt = 0;

		long long maxdistance = -1;
		for(int i=0;i<n;i++)
		{
			cin >> x;
			v.push_back(x);

			if(x!=-1)
			{
				total += x;
				cnt++;	
			} 
		}

		for(int i=0;i<n-1;i++)
		{
			if(v[i]!=-1 && v[i+1]!=-1)
			{
				 if(abs(v[i]-v[i+1])>=maxdistance) maxdistance = abs(v[i]-v[i+1]);
			}
		}

		long long result = (long long)ceil(((double)total/cnt));

		long long mindistance = LLONG_MAX;
		for(int i=0;i<v.size()-1;i++)
		{
			if(v[i]==-1) v[i] = result;
			else if(v[i+1]==-1) v[i+1] = result;


			if(abs(v[i]-v[i+1])<mindistance) mindistance = abs(v[i]-v[i+1]);
		}

		if(maxdistance!=-1)
		{
			if(maxdistance>=mindistance) mindistance = maxdistance;
		}

		cout << maxdistance << endl;

		if(total==0) cout << 0 << " " << 0 << endl;
		else cout << (long long)mindistance << " " << (long long)result << endl;

	}
	return 0;
}