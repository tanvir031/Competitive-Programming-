#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;


	long long max = 0;
	for(int i=0;i<s.size();i++)
	{
		long long n=1;

		for(int j=i;j<i+13;j++)
		{
			n *= (int) ((int)s[j]-48);
		}

		if(n>=max) n=max;
	}

	cout << s.size() << endl;

	return 0;
}	