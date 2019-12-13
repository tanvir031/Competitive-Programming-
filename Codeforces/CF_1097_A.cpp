#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	bool is_game = false;
	string k;
	for(int i=0;i<5;i++)
	{
		cin >> k;
		if(k[0]==s[0] || k[1]==s[1]){
			is_game = true;
		}
	}

	if(is_game) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;
}