#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h,m;
	scanf("%d:%d",&h,&m);
	int n;
	scanf("%d",&n);

	long long r = (h*60) + m;
	r += n;
	
	cout << setw(2) << setfill('0') << (r/60)%24 << ":" << setw(2) << setfill('0')  << (r%60) << endl;
	return 0;
}