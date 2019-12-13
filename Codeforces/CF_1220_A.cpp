#include <bits/stdc++.h>
using namespace std;

int main()
{
	int nx;
	cin >> nx;
	map <char,int> m;

	string s;
	cin >> s;
	for(int i=0;i<nx;i++)
	{
		m[s[i]]++;
	}

	int n1=0,n2=0;
	while(1)
	{
		/*char o = o;
		char n = n;
		char e = e;
		char z = z;
		char r = r;
*/
		if(m['o']>0 && m['n']>0 && m['e']>0){

			m['o']--;
			m['n']--;
			m['e']--;
			n1++;
		}
		else if(m['z']>0 && m['e']>0 && m['r']>0 && m['o']>0){
			m['z']--;
			m['e']--;
			m['r']--;
			m['o']--;
			n2++;
		}
		else break;
	}

	for(int i=0;i<n1;i++)
		cout << 1 << " ";

	for(int i=0;i<n2;i++)
		cout << 0 << " ";
	cout << endl;

	return 0;
}
