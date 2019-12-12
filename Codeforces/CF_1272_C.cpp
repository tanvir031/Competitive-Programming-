#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,k;
	cin >> n >> k;
 
	string s;
	cin >> s;
 
	map<char,int> m;

	for(int i=97;i<=122;i++)
	{
		m[(char)i] = 0;
	}
 
	for(int i=0;i<k;i++)
	{
		char x;
		cin >> x;
		m[x] = 9;
	}
 
	
	long long result = 0;
 
	long long  temp = 0;
	for(int i=0;i<=n;i++)
	{
		if(m[s[i]]==9){
			temp++;
		}
 
		else if(m[s[i]]!=9){
			result += temp*(temp+1)/2;
			temp = 0;
		}
 
		
	}
 
	cout << result << endl;
 
 
	
	
 
	return 0;
}