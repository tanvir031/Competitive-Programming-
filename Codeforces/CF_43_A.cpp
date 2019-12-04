#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;

	map <string,int> m;
	map <string,int>::iterator it;

	for(int i=0;i<n;i++)
	{
		cin >> s;
		m[s]++;
	}

	long long max = 0;
	string res;
	for(it=m.begin();it!=m.end();it++){
		if((it->second)>= max){
			max = it->second;
			res = it->first;
		}
	}

	cout << res << endl;
	
	return 0;
}