#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		
		std::vector<int> v;

		for (int i = 0; i < 3; ++i)
		{
			int n;
			cin >> n;
			v.push_back(n);
		}

		sort(v.begin(),v.end());": ";

		cout << "Case " << t+1 << 

		if(v[0]+v[1]<=v[2])
		{
			cout << "Invalid" << endl;
		}

		else if(v[0]==v[1] && v[1]==v[2])
			cout << "Equilateral" << endl;
		else if(v[0]==v[1] || v[1]==v[2])
			cout << "Isosceles" << endl;
		else if(v[0]!=v[1] && v[1]!=v[2])
			cout << "Scalene" << endl;

	}
}