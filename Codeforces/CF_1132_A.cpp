#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;

	if(c>1) c=1;
	
	if(a-c>=0 && d-c>=0){
		a -= c;
		d -= c;
		c -= c;
	}

	int x = a;
	int y = d;

	a -= y;
	d -= x;

	//cout << a << d << c;
	if(a==0 && d==0 && c==0) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}