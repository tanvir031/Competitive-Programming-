#include <bits/stdc++.h>
using namespace std;



int main()
{
	map <int,int> m;
	string k1 = "adgjmptw ";
	string k2 = "behknqux";
	string k3 = "cfilorvy";
	string k4 = "sz";

	for(int i=0;i<k1.size();i++)
		m[k1[i]] = 1;
	for(int i=0;i<k2.size();i++)
		m[k2[i]] = 2;
	for(int i=0;i<k3.size();i++)
		m[k3[i]] = 3;
	for(int i=0;i<k1.size();i++)
		m[k4[i]] = 4;

    long long n;
	cin >> n;
	cin.ignore();

	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		long long ans=0;
		for(int i=0;i<s.size();i++)
		{
			ans += m[s[i]];
		}
		cout << "Case #" << i+1 << ": " << ans << endl;

	}
}
