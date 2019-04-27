 #include <bits/stdc++.h>
using namespace std;


void  sumdigit(int a)
{
	vector <int> v;
	while(1)
	{
		if(a==0) break;
		v.push_back(a%10);
		a = a/10;
	}


	double n=0;
	int k=0;

	for (int i = 0; i < v.size(); ++i)
		{
			n += v[i] * pow(10,i);
			k += v[i];
		}


    if(k<10)
    {
        cout << k  << endl;
    }
    if(k>9)
    {
        sumdigit(k);
    }

}

int main()
{

	int k;
	while(1)
    {
        cin >> k;
        if(k==0) return 0;
        sumdigit(k);
    }
}
