#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string s1,s2;
		cin >> s1 >> s2;

		bool result = 0;

		int n = s1.size();

		if(s1.size()>s2.size())
		{
			cout << "NO" << endl;
			continue;
		}

		vector <char> s;
		vector <char> x;

		for(int i=0;i<s1.size();i++)
			x.push_back(s1[i]);
		sort(x.begin(),x.end());
		for(int i=0;i<=(s2.size()-s1.size());i++)
		{
			//cout << i << endl;
			for(int j=i;j<i+s1.size();j++)
			{
				s.push_back(s2[j]);
			}

			/*for (std::set<char>::iterator ii = s.begin(); ii != s.end(); ++ii)
			{
				cout << *ii  << " ";
			}
			cout << endl;*/
			sort(s.begin(),s.end());
			if(s==x)
			{
				result = 1;
				s.clear();
				break;
			}
			else s.clear();
		}

		if(result) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
	return 0;
}