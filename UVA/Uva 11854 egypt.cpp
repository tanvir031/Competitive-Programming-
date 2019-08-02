#include <bits/stdc++.h>
using namespace std;


int main(int argc, char  *argv[])
{

	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	double a,b,c;

	while(cin >> a >> b >> c)
	{
		if(a==0 && b==0 && c==0){
			return 0;
		}

		vector <double> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(),v.end());

		if(v[0]*v[0]+v[1]*v[1]==v[2]*v[2])
			cout << "right" << endl;
		else 
			cout << "wrong" << endl;

	}

	return 0;
		
}