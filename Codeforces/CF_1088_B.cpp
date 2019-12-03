#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;

	vector <int> v(n),zero(n),v2;

	for(int i=0;i<n;i++){
		cin >> v[i];
		zero[i] = 0;
	}

	sort(v.begin(),v.end());
	long long sum =0;

	v2.push_back(v[0]);
	for(int i=1;i<v.size();i++){
		if(v[i]!=v[i-1]){
			v2.push_back(v[i]);
		}
	}
	v = v2;
	
	if(k>=v.size())
	{
			for(int i=0;i<v.size();i++)
			{	
				int x = v[i]-sum;
				//if(x==0 && i>=(v.size()-1)) cout << x << endl;
				if(x>0){
					cout << x << endl;
					sum += x; 
				}
			}

			for(int i=0;i<(k-v.size());i++)
			{
				cout << 0 << endl;
			}		
	}

	else {

		for(int i=0;i<k;i++)
			{	
				int x = v[i]-sum;
				//if(x==0 && i>=(v.size()-1)) cout << x << endl;
				if(x>0){
					cout << x << endl;
					sum += x;
				}
			}
	}


	
	return 0;
}