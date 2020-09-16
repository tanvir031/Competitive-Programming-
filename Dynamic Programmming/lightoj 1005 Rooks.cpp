#include <bits/stdc++.h>
using namespace std;
#define sz 901	

long long dp[sz][sz];

long long f(long long n,int long long k)
{
	if(k==1) return n*n;
	if(k==0) return 1;

	long long r = 0;
	if(dp[n-1][k-1]==0) r = (f(n-1,k-1) *n*n)/k;
	else r = (dp[n-1][k-1]*n*n)/k;
	return r;
}

int main()
{
	for(int i=0;i<sz;i++)
		for(int j=0;j<sz;j++)
			dp[i][j] = 0;
	//cout << f(4,3) << endl;
	int t;
	cin >> t;

	long long n,k;
	long long r=0;
	for(int i=0;i<t;i++)
	{
		cin >> n >> k;
		cout << "Case "  << i+1 << ": ";
		if(k>n)
		{
			cout << 0 << endl;
		}
		else 
		{
			if(dp[n][k]==0)
			{
				r = f(n,k);
				cout << r << endl;
			}
			else 
			{
				cout << dp[n][k] << endl;
			}
		}
	}

}
