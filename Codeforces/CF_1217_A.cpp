#include <bits/stdc++.h>
using namespace std;

bool visited[1000001];
long long parent[1000001];

int main()
{
	long long a,b;
	long long result = -1;
	cin >> a >> b;


	for(int i=0;i<1000001;i++)
	{
		visited[i] = 0;
		parent[i] = -1;
	}

	parent[b] = -1;

	queue <long long> bfsQ;
	bfsQ.push(b);


	while(!bfsQ.empty())
	{
		long long u = bfsQ.front();
		bfsQ.pop();
		//cout << u << endl;
				

		if(visited[u]==0)
		{
			long long x;
 
			

			if(u%2==0)
			{
				x = u/2;
			}
			else if(u%10==1 && u!=1)
			{
				x = (u-1)/10;
			}
			else break;

			if(x==a)
			{
				result = x;
				parent[x] = u;
				break;
			}

			visited[u] = 1;
			parent[x] = u;
			bfsQ.push(x);


		}
	}

	if(result!=-1)
	{
		vector <long long> v;

	long long k = a;
	v.push_back(a);
	while(1)
	{
		if(parent[k]==-1)
		{
			break;
		}
		v.push_back(parent[k]);
		k = parent[k];
	}

	//reverse(v.begin(),v.end());
	cout << "YES" << endl;
	cout << v.size() << endl;
	for(int i=0;i<v.size();i++)
		cout << v[i] << " ";
	cout << endl;
	}
	else 
		cout << "NO" << endl;

	//cout << result << endl;

	return 0;
}
