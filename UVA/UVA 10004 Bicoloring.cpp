#include <bits/stdc++.h>
using namespace std;

vector <int> g[10000];

void bfs(int src)
{
	queue <int> q;
	int visited[100000] = {0};
	int color[100000];
	q.push(src);
	color[src] = 1;
	visited[src] = 1;

	while(!q.empty())
	{
		int u = q.front();
		q.pop();

		for(int i=0;i<g[u].size();i++)
		{
			int v = g[u][i];
			if(!visited[v])
			{
				color[v] = color[u] * (-1);
				visited[v] = 1;
				q.push(v);
			}
			else if(color[v] == color[u])
			{
				cout << "NOT BICOLORABLE." << endl;
				return;
			}
		}
	}
	cout << "BICOLORABLE." << endl;
}


int main()
{
	int vertex,edge,x,y,src;

	while(cin >> vertex)
	{
		if(vertex==0) break;

		cin >> edge;
		for(int i=0;i<vertex;i++) g[i].clear();

		for(int i=0;i<edge;i++)
		{
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
			if(i==0) src = x;
		}
		bfs(src);
	}
	return 0;
}
