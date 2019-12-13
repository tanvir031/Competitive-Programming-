#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;

	vector <int> v;

	for(int i=0;i<k;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);	
	}

	int r=0;

	reverse(v.begin(),v.end());
	for(int i=0;i<k;i++)
	{
		int x = ((i%2)*(v[i]))%2;
		r +=  x;
	}

	if(r%2==0) cout << "even" << endl;
	else cout << "odd" << endl;
	return 0;
}