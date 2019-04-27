	 #include <bits/stdc++.h>
using namespace std;


int main()
{
	int a,b;

	while(scanf("%d%d",&a,&b)==2)
	{
		if(a == -1 & b == -1)
		{
			return 0;
		}

		double r = abs(a-b);

		if(r>50) cout << 100 - (int)r << endl;
		else if(r<=50) cout << (int)r << endl;
	}
}