#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[10][10];

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
		{
			if(i==0 || j==0){
				a[i][j] = 1;
			}
			else{
				int r=0;
				for(int k=0;k<=j;k++){
					r += a[i-1][k];
				}
				a[i][j] = r;
			}
		}
	}

	cout << a[n-1][n-1] << endl;

	return 0;
}