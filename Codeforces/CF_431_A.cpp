#include <bits/stdc++.h>
using namespace std;

int main()
{
	map <int,int> m;

	for(int i=1;i<=4;i++){
		int x;
		cin >> x;
		m[i] = x; 
	}
	long long r=0;

	string s;
	cin >> s;

	for(int i=0;i<s.size();i++){
		r += m[(long long)s[i] - 48];
	}
	cout << r << endl;

	return 0;
}