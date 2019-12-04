#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{	
		int n;
		cin >> n;
		vector <int> v1(n),v2(n);

		for(int i=0;i<n;i++)
			cin >> v1[i];
		for(int i=0;i<n;i++)
			cin >> v2[i];

		int compare = 0;

		bool result = true;
		bool series = false;
		for(int i=0;i<n;i++)
		{
			if(v1[i]==v2[i] && series==false){
				continue;
			}
			else if(v1[i]==v2[i] && series==true){
				compare = -1;
			}
			else{
				if(v2[i]-v1[i]>0 && compare==0)
				{
					compare = v2[i]-v1[i];
					series = true;
				}
				else if(v2[i]-v1[i]!=compare && compare!=0){
					result = false;
					break;
				}
				else if(v2[i]-v1[i]<0){
					result = false;
					break;
				}
			}
		}

		if(result) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
	return 0;
}
