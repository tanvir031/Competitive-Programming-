#include <bits/stdc++.h>
using namespace std;

#define sz 10001
#define inf 1000000

int main()
{
	int t;
	cin >> t;


	int startingNode=0,destination;
	int t2;
	while(t--)
	{
		cin >> destination >> t2;

		vector <int> adj[sz];

		int a,b;
		for(int i=0;i<t2;i++)
		{
			cin >> a >> b;

			adj[a-1].push_back(b-1);
			adj[b-1].push_back(a-1);

		}	
		int dis[sz];
		int parent[sz];
		int visited[sz];

		for(int i=0;i<destination;i++)
		{
			if(i!=startingNode)
			{
				visited[i] = 0;
				parent[i] = -1;
				dis[i] = inf;
			}
		}

		visited[startingNode] = 1;
		dis[startingNode] = 0;
		parent[startingNode] = -1;

		queue <int> bfsQueue;
		bfsQueue.push(startingNode);

		while(!bfsQueue.empty())
		{
			int u = bfsQueue.front();
			bfsQueue.pop();

			for(int i=0;i<adj[u].size();i++)
			{
				if(visited[adj[u][i]]==0)
				{
					visited[adj[u][i]] = 1;
					parent[adj[u][i]] = u;
					dis[adj[u][i]] = dis[u] + 1;
					bfsQueue.push(adj[u][i]);
				}
			}
		} 

		cout << dis[destination-1] << endl;

	}	

	return 0;
}