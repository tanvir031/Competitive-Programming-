#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin >> t;

	string s;
	int n;

	while(t--)
	{
		cin >> n;
		cin >> s;
		string x = "";
		int pos = 0,pos2=0;
		for(int i=0;i<s.size()-1;i++)
		{
			if(((int)s[i]-48)%2==1)
			{
				pos = i;
				x.push_back(s[i]);
				break;
			}
		}

		for (int i = s.size()-1; i >= pos; i--)
		{
			if(((int)s[i]-48)%2==1)
			{
				x.push_back(s[i]);
				pos2 = i;
				break;
			}
		}

		if(x.size()==2 && pos!=pos2)
		{
			cout << x << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	return 0;
}