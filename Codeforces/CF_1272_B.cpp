#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string s;
		cin >> s;

		long long l=0,r=0,u=0,d=0;

		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='L') l++;
			else if(s[i]=='R') r++;
			else if(s[i]=='U') u++;
			else if(s[i]=='D') d++;
		}

		if(min(u,d)==0 && min(l,r)>0)
		{
			l=1;
			r=1;
		}
		else if(min(l,r)==0 && min(u,d)>0)
		{
			u=1;
			d=1;
		}
		long long result = min(l,r) + min(u,d);
		cout << 2*result << endl;

		for(int i=0;i<min(l,r);i++)
			cout << "L";
		for(int i=0;i<min(u,d);i++)
			cout << "U";
		for(int i=0;i<min(l,r);i++)
			cout << "R";
		for(int i=0;i<min(u,d);i++)
			cout << "D";
		cout << endl;

	}
	return 0;
}