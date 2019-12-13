#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2;
	vector <int> v1,v2;

	cin >> n1;
	int x;
	for(int i=0;i<n1;i++)
	{
		cin >> x;
		v1.push_back(x);
	}
	cin >> n2;
	for(int i=0;i<n2;i++)
	{
		cin >> x;
		v2.push_back(x);
	}

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());

	cout << v1[v1.size()-1] << " " << v2[v2.size()-1] << endl;
	return 0;
}
