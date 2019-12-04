#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{	
		int a,b;
		cin >> a >> b;

		int r = 0;
		if(1)
		{
			int x = abs(a-b);

			
			if(x/5>0)
			{
				r += x/5;
				x = x%5;
			}
			if(x/2>0)
			{
				r += x/2;
				x = x%2;
			}
			if(x/1>0)
			{
				r += x;
			}
		}

		

		cout << r << endl;
	}
	return 0;
}
