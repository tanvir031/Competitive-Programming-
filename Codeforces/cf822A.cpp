#include <bits/stdc++.h>
using namespace std;


int main()
{
	unsigned long long n;
	cin >> n;

	long long r=n;
	
	if(n%10>=5)
	{
		for(int i=n;;i++)
		{
			if(i%10==0){
				r = i;
				break;
			}
		}

	}

	else 
	{
		for(int i=n;;i--)
		{
			if(i%10==0){
				r = i;
				break;
			}
		}

	}
	cout << r << endl;

	return 0;
}