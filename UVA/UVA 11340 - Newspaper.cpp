	 #include <bits/stdc++.h>
using namespace std;


int main()
{
	int x;
	cin >> x;
	while(x--)
    {
        map <char,int> m;

	int n;
	scanf("%d",&n);

	for (int i = 0; i < n; i++)
	{
		int i1;
		char c1;

		cin >> c1 >> i1;

		m.insert(make_pair(c1,i1));
	}

	double r = 0;

	int t;
	cin >> t;
    string s3;
	for(int i=0; i<t+1 ;i++)
    {
        getline(cin,s3);

        for(int j=0;j<s3.size();j++)
        {
            r += m[(int)s3[j]];
        }
    }

    printf("%.02f$\n",r/100);
    }

}
