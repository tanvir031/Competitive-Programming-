#include <bits/stdc++.h>
using namespace std;

int main()
{

	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	string s;
	int t;
	cin >> t;
for(int ii=0;ii<t;ii++){


	cin >> s;

	int sum = 0, tab = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='O'){
			tab++;
			sum += tab;
		}
		else 
			tab = 0;
	}
	cout << sum << endl;
}	
	return 0;
		
}