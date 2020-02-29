#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string s;
		cin >> s;

		
		int r = 0;

		int two,eight,four,six,zero;

		two= 0;
		eight=0;
		four=0;
		six=0;
		zero=0;

		for(int i=0;i<s.size();i++)
		{
			r += (int)s[i]-48;
			if(s[i]=='2') two++;
			else if(s[i]=='4') four++;
			else if(s[i]=='6') six++;
			else if(s[i]=='8') eight++;
			else if(s[i]=='0') zero++;
		}

		if(zero==s.size())
		{
			cout << "red" << endl;
			continue;
		}

		if(r%3==0)
		{
			if(zero>0 && (two>0 || four>0 || six>0 || eight>0))
			{
				cout << "red" << endl;
				continue;
			}
			else if(zero>1)
			{
				cout << "red" << endl;
				continue;
			}

		}

		cout << "cyan" << endl;


	}
	return 0;
}