#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	long long n1,n2,q;
	while(t--)
	{
		cin >> n1 >> n2;
		vector < pair <long long,long long> > v1,sorted;
		vector < long long > v2(n2);


		for(long long i=0;i<n1;i++)
			{
				cin >> q;
				v1.push_back({q,i});
			}
		for(long long j=0;j<n2;j++)
			cin >> v2[j];	

		bool connection[n1+1] = {0};

		for(long long i=0;i<n2;i++)
		{
			connection[v2[i]+1] = 1;
		}

		/*for(int i=0;i<n1+1;i++)
		{
			cout << connection[i] << " ";
		}*/



		sorted = v1;
		sort(sorted.begin(),sorted.end());

		/*for(int i=0;i<sorted.size();i++)
			cout << sorted[i].first << " ";
		cout << endl;*/

		bool is_true = 1;

		for(long long i=0;i<n1;i++)
		{
			long long pos;

			for(long long j=0;j<n1;j++)
			{
				if(v1[i].first==sorted[j].first)
				{
					pos = j;
					//cout << pos << endl;
					break;
				}
			}

			if(pos==v1[i].second)
			{
				goto jump;
			}
			else
			{
				for(long long j=min(pos,v1[i].second)+1;j<=max(pos,v1[i].second);j++)
				{
					//cout << j << endl;
					if(connection[j+2]!=1)
					{
						is_true = 0 ;
						goto jump;
					}
				}
			}
		}

		jump:
		if(is_true) cout << "YES" << endl;
		else cout <<"NO" << endl;

	}
	return 0;
}