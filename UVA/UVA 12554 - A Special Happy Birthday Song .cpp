	 #include <bits/stdc++.h>
using namespace std;


int main()
{
	vector <string> v;
	vector <string> k;

	int a;
	scanf("%d",&a);

	for(int i=0;i<a;i++)
	{
		string s;
		cin >> s;

		v.push_back(s);
	}

	for (int i = 1; i <= 16; ++i)
	{
		if(i==12)
		{
			k.push_back("Rujia");
			continue;
		}

		if(i%4==1) k.push_back("Happy");
		else if(i%4==2) k.push_back("birthday");
		else if(i%4==3) k.push_back("to");
		else if(i%4==0) k.push_back("you");



	}

	int size = (int)(ceil((double)a/16.00))*16;

    int l=0;
	for (int i = 0; i < size; i++)
	{
		cout << v[l] << ": " << k[i%16] << endl;

		if(l==(a-1))
		{
			l = 0;
			continue;
		}
		l++;
	}

}
