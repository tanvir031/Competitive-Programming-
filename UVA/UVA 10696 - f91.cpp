#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;


	while(scanf("%d",&a))
	{
		if(a==0) return 0;


		printf("f91(%d) = ", a);
		if(a<=100) cout << 91 << endl;
		else if(a>=101) cout << a-10 << endl;
	}
}
