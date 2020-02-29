#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	int n;
	while(t--)
	{
		cin >> n;

		if(n==2)
			cout << 1 << endl;
		else if(n==3)
			cout << 7 << endl;
		else if(n%2==0)
		{
			string s="";
			for(int i=0;i<(int)n/2;i++)
			{
				s += '1';
			}
			cout << s << endl;
		}

		else if(n%2==1)
		{
			string s="";
			for(int i=0;i<(int)n/2;i++)
			{
				s += '1';
			}
			s[0] = '7';
			cout << s << endl;
		}
	}

	return 0;
}