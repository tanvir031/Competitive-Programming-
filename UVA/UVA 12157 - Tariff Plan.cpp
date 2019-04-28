#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int j = 0; j < t; ++j)
	{


	int n;
	scanf("%d",&n);
	vector<int> v;

	double r1=0;
	double r2=0;

	for (int i = 0; i <n; ++i)
	{
		double k;
		cin >> k;
		r1 += ceil(k/30.00 + 0.01)*10;
		r2 += ceil(k/60.00 + 0.01)*15;
	}

    //cout << r1 << "dhur shala " << r2 << endl;
	if(r1<r2)
		cout << "Case " << j+1 << ": " << "Mile " << r1 << endl;
	else if(r2<r1)
		 cout << "Case " << j+1 << ": " << "Juice " << r2 << endl;
	else if(r2==r1)
		cout << "Case " << j+1 <<  ": " << "Mile " << "Juice " << r1 << endl;

	}
}
