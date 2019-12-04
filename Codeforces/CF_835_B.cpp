#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	long long sum= 0;

	for(int i=0;i<s.size();i++)
	{
		sum += (int)s[i]-48;
	}
	
	if(sum>n) cout << 0 << endl;

	sort(s.begin(),s.end());

	int r=0;
	for(int i=0;i<s.size();i++)
	{
		if(n<=0) break;
		int x = (int)s[i]-48;
		n -= (9-x);
		r++;
	}
	cout << r << endl;
	
	return 0;
}