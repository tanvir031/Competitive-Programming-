#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s[10000];


	while(scanf("%s",&s)!=EOF)
	{
		vector  <int> v;
		for (int i = 0; i < strlen(s); ++i)
		{
			if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V') v.push_back(1);
			else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z')
				v.push_back(2);
			else if(s[i]=='D' || s[i]=='T') v.push_back(3);
			else if(s[i]=='L') v.push_back(4);
			else if(s[i]=='M' || s[i]=='N') v.push_back(5);
			else if(s[i]=='R') v.push_back(6);
			else v.push_back(0);
		}

		for(int i=0;i<v.size();i++)
		{
			if(i==v.size()-1)
			{
				if(v[i]!=0)cout << v[i];
				break;
			}
			if(v[i]!=v[i+1])
			{
				if(v[i]!=0) cout << v[i];
			}
		}
		cout << endl;

	}
}
