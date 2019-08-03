#include <bits/stdc++.h>
using namespace std;

int main(int argc, char  *argv[])
{

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	string s;
	while(cin >> n){
		if(n==0) return 0;

		cin >> s;

		int t = s.size()/n;

		string str1 = "";
		string str2 = "";

		int x=1;
		for(int i=0*x;i<t*x && t*x<=s.size();i++){
			str2 += s[i];
			if(i==t*x-1){
				reverse(str2.begin(),str2.end());
				str1 += str2;
				str2 = "";
				x++;
			}
		}
		cout << str1 << endl;
	}
	return 0;
		
}