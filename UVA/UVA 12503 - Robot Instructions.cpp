	 #include <bits/stdc++.h>
using namespace std;


int main()
{
	int rr;
	cin >> rr;

	while(rr--)
    {

        int n;
	cin >> n;
	vector <string> v;

	int r=0;

	for (int i=0; i<n; i++)
	{
	    string s;
		cin >> s;
		if(s=="SAME")
		{
		    string k;
		    cin >> k;
		    if(k=="AS")
            {
                int x;
			cin >> x;
			v.push_back(v[x-1]);
            }


		}
		else
		{
			v.push_back(s);
		}
	}

	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i]=="LEFT") r--;
		else if(v[i]=="RIGHT") r++;
	}

	cout << r << endl;
    }

}
