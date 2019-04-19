#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s[1000];

	while(scanf("%s",s)!=EOF)
	{
		int sz = strlen(s);
		string r = "";
		for(int i=0;i<sz;i++)
		{
			if(s[i]=='1' || s[i]=='0' || s[i]=='-') r += s[i];
			else if(s[i]=='A' || s[i]=='B' || s[i]=='C') r += '2';
			else if(s[i]=='D' || s[i]=='E' || s[i]=='F') r += '3';
			else if(s[i]=='G' || s[i]=='H' || s[i]=='I') r += '4';
			else if(s[i]=='J' || s[i]=='K' || s[i]=='L') r += '5';
			else if(s[i]=='M' || s[i]=='N' || s[i]=='O') r += '6';
			else if(s[i]=='Q' || s[i]=='R' || s[i]=='S' || s[i]=='P') r += '7';
			else if(s[i]=='T' || s[i]=='U' || s[i]=='V') r += '8';
			else if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z' ) r += '9';
		}

		cout << r << endl;
	}
}
