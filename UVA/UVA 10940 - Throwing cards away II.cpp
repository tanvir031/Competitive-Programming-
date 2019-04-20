#include <bits/stdc++.h>
using namespace std;

int main()
{
	while(true)
	{
		int a;
		cin >> a;
		if(a==0) return 0;

		int k =  log2(a);
		int r = a - pow(2,k);
		if((k-log2(a))==0 ) cout << a << endl;
		else cout << 2 * r << endl;
	}
}
