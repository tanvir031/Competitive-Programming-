#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	int i=1;
	while(true)
	{

		cin >> a;
		if(a==0)
		{
			return 0;
		}


		std::vector<int> v;

		long long sum = 0;
		for(int i=0;i<a;i++)
		{
			int k;
			cin >> k;
			v.push_back(k);
			sum += k;
		}

		int mid = sum/v.size();

		int r = 0;
		for (int i = 0; i < v.size(); ++i)
		{
			if(v[i]>mid) r += v[i]-mid;
		}

		cout << "Set #" << i << endl;
		i++;

		cout << "The minimum number of moves is " << r << "." << endl;
		cout << endl;
	}
}
