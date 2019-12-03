#include <bits/stdc++.h>
using namespace std;

int m,n;

int main()
{
	
	scanf("%d %d",&m,&n);
	int s[m];
	pair <int,int> v[m];

	

	for(int i=0;i<m;i++)
		s[i] = i+1;

	for(int i=0;i<m;i++)
	{
		v[i].first = i+1;
		v[i].second = i+1;
	}

	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		for(int j=0;j<m;j++)
		{
			if(x==s[j])
			{
				if(j!=0)
				{
					int temp = s[j];
					s[j] = s[j-1];
					s[j-1] = temp;
					//swap(s[j],s[j-1])
					//v[s[j]-1].push_back(j);
					if( j+1 < v[s[j]-1].first) v[s[j]-1].first = j+1;
					if(j+1 > v[s[j]-1].second) v[s[j]-1].second = j+1; 
					//v[s[j]-1].push_back(j+1);

					if(j < v[s[j-1]-1].first) v[s[j-1]-1].first = j;
					if(j > v[s[j-1]-1].second) v[s[j]-1].second = j;
					//v[s[j-1]-1].push_back(j);
					//cout << "lksjdf" << endl;
				}
				break;
			}
		}
	}

	for(int i=0;i<m;i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
	
	
	return 0;
}