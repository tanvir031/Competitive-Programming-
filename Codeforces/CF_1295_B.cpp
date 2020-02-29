#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,t;
	string s;

	cin >> t;

	while(t--)
	{
		cin >> n >> x;
		cin >> s;

		int r = 0;
		char a = '0';
		char b = '1';
		r = count(s.begin(),s.end(),a) - count(s.begin(),s.end(),b);
		//cout << r << endl;

		int balance = 0;
		vector <int> v;

		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='0') balance++;
			else if(s[i]=='1') balance--;

			v.push_back(balance);
		}

		if(v[v.size()-1]==0)
		{
			if(x==0) cout << -1 << endl;
			else cout << 0 << endl;
		}
		else if(x==0)
		{
			cout << count(v.begin(),v.end(),0) +1 << endl;
		}
		else if((v[v.size()-1]>0 && x<0) || (v[v.size()-1]<0 && x>0) )
		{
			cout << 0 << endl;
		}
		else
		{
			if(x>0)
			{
				if(x%v[v.size()-1]==0)
				{
					cout << count(v.begin(),v.end(),v[v.size()-1]) + count(v.begin(),v.end(),0) << endl;
				}

				else
				{
					int r = x%v[v.size()-1];
					cout << count(v.begin(),v.end(),r) + count(v.begin(),v.end(),r-v[v.size()-1])<< endl;
				}
			}

			else if(x<0)
			{
				
				if(((-1)*x)%((-1)*v[v.size()-1])==0)
				{
					cout << count(v.begin(),v.end(),v[v.size()-1]) + count(v.begin(),v.end(),0) << endl;
				}

				else
				{
					int r = ((-1)*x)% ((-1)*v[v.size()-1]);
					r *= -1;
					cout << count(v.begin(),v.end(),r) + count(v.begin(),v.end(),r-v[v.size()-1])<< endl;
				}
			}

		}
	}
}