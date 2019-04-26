#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;

	while(getline(cin,a))
	{
		vector <string> v;
		string d = "";
		for (int i = 0; i < a.size(); ++i)
		{
			if(a[i]!=' ') d += a[i];

			if(a[i]==' ' || i==a.size()-1)
			{
				reverse(d.begin(),d.end());
				v.push_back(d);
				d = "";
			}
		}

		for(int i=0;i<v.size();i++)
		{
			cout << v[i];
			if(i!= v.size()-1) cout << " ";
		}
		cout << endl;
	}



}