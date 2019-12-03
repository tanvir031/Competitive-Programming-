#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector < int > v,k;

	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	k = v;
	sort(k.begin(),k.end());

	int pos;

	for(int i=0;i<v.size();i++)
	{
		if(v[i]==k[0]){
			pos = i;
			break;
		}
	}

	int min = INT_MAX;
	for(int i=pos+1;i<v.size();i++)
	{
		if(v[i]==k[0]){
			int ab = i - pos;
			if(ab<min) min = ab;
			pos = i; 
		}
	}
	cout << min;

	return 0;
}