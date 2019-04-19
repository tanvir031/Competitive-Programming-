#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;

	while(scanf("%d",&a)!=EOF)
	{
		if(a==0) return 0;

		cin >> b;

		if(a==1 || b==1) 
		{
			if(a*b>1) cout << max(a,b)-1 << endl;
			else cout << 0 << endl;
			continue;
		}

		cout << (a-1) + a * (b-1) << endl;
	}
}