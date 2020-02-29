#include <bits/stdc++.h>
using namespace std;




long long int visited[100005];

long long int bfs(vector <long long int> &v,long long int source,long long int destination)
{

	//cout << source << " " << destination << endl;
	memset(visited,-1,sizeof(visited));


	queue <long long int> bfsQueue;
	bfsQueue.push(source);
	visited[source] = 0;


	while(!bfsQueue.empty())
	{
		long long int u = bfsQueue.front();
		//cout << u << endl;
		bfsQueue.pop();

		if(u == destination)
		{
			return 1; 
		}

		for(int i=0;i<v.size();i++)
		{	

			long long int x = v[i];
			x *= u;
			x %= 100000;

			
			if(visited[x]==-1)
			{
				visited[x] = visited[u] + 1;
				bfsQueue.push(x);
			}

		}
	}
}




int main()
{
	long long int x,y;
	cin >> x >> y;

	long long int n;
	cin >> n;

	vector <long long int> v(n);

	for(int i=0;i<n;i++)
		cin >> v[i];

	bfs(v,x,y);

	if(x==y) 
	{
		cout << 0 << endl;
	}
	else cout << visited[y] << endl;


	return 0;
}