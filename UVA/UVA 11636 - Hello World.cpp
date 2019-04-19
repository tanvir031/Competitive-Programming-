#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	int i=1;
	while(scanf("%d",&a)==1)
	{
	    if(a<0) return 0;

	    if(a==1 || a==0)
        {
            cout << "Case " << i << ": " << 0 << endl;
            i++;
            continue;
        }
		double k = log2(a);
		cout << "Case " << i << ": ";
		i++;
		cout << ceil(k) << endl;
	}
}
