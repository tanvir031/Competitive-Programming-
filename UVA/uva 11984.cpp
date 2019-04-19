#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i=0;i<n;i++)
	{
		double a,b;
		cin >> a >> b;

		printf("Case %d: %.2f\n",i+1, a+b*5/9);
	}

} 