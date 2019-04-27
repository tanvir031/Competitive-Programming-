#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;

	while(scanf("%d",&a)!=EOF)
    {

	vector <int> v;
	int r;
	for (int i = 0; i < a; ++i)
	{
		int l;
		scanf("%d",&l);
		if(i!=0) v.push_back(abs(r-l));
		r = l;
	}

	sort(v.begin(),v.end());
	int flag = 0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]!=i+1)
		{
			flag = 1;
			break;
		}
	}

	if(flag==1) cout << "Not jolly" << endl;
	else if(flag==0) cout << "Jolly" << endl;
    }



}
