#include <bits/stdc++.h>
using namespace std;

int coin[] = {50,25,10,5,1};
int target;
int dp[5][7500];

int f(int i,int amount)
{
	if(i>=5)
	{
		if(amount==target)
			return 1;
		else return 0;
	}

	if(dp[i][amount]!=-1) return dp[i][amount];
	int ret1=0,ret2=0;
	if(amount+coin[i]<=target) ret1=f(i,coin[i]+amount);

	else ret1=0;

	ret2 = f(i+1,amount);

	return dp[i][amount] = ret1+ret2;
}


int main()
{
	while(cin >> target)
	{
		memset(dp,-1,sizeof(dp));
		cout << f(0,0) << endl;;
	}
}
