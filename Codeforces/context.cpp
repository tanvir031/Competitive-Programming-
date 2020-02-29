#include <bits/stdc++.h>
using namespace std;

bool validposition(int a,int b)
	{
		if((a>=0 && a<8) && (b>=0 && b<8)) return true;
		else return false;
	}



int main() 
{
	int board[8][8];

	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			board[i][j] = -1;

	int c1[8] = {2,2,1,1,-2,-2,-1,-1};
	int c2[8] = {1,-1,2,-2,1,-1,2,-2};

	string s = "abcdefgh";

	string x,y;
	cin >> x >> y;

	int rooki,rookj,knighti,knightj;

	rooki = x[1]-48-1;
	knighti = y[1]-48-1;
	rookj = s.find(x[0]) + 1 -1;
	knightj = s.find(y[0]) + 1 -1;

	/*cout << rooki << rookj << endl;
	cout << knighti << knightj << endl;*/

	for(int i=0;i<8;i++)
	{
		board[i][rookj] = 1;
		board[rooki][i] = 1;
	}

	board[rooki][rookj] = 2;
	board[knighti][knightj] = 2;

	for(int i=0;i<8;i++)
	{
		if(validposition(rooki+c1[i],rookj+c2[i]))	board[rooki+c1[i]][rookj+c2[i]] = 1;
		if(validposition(knighti+c1[i],knightj+c2[i]))	board[knighti+c1[i]][knightj+c2[i]] = 1;
	}

	long long result = 0;
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
		{
			if(board[i][j]==-1) result++;
		}


	cout << result << endl;
}

