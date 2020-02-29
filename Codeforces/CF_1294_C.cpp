#include <bits/stdc++.h>
using namespace std;

vector <int> primeFactors(int n);

int main()
{
	int t;
	cin >> t;

	vector <int> v;
	while(t--)
	{
		int n;
		cin >> n;

		v = primeFactors(n);
		sort(v.begin(),v.end());

		if(v.size()<3)
		{
			cout << "NO" << endl;
			continue;
		}

		int a=v[0],b=1,c=1;

		int pos = 1;
		for(int i=1;i<v.size();i++)
		{
			if(v[i]!=a)
			{
				b = v[i];
				
				for(int j=i+1;j<v.size();j++)
				{
					c *= v[j];
				}
				//cout << c << endl;
				pos = v.size();
				break;
			}
			else if(v[i]==a)
			{
				b = v[i] * v[i+1];

				for(int j=i+2;j<v.size();j++)
				{
					c *= v[j];
				}
				break;
			}
		}

		if(a!=1 && b!=1 && c!=1)
		{
			if(a!=b && b!=c && c!=a)
			{
				cout << "YES" << endl;
				cout << a << " " << b << " " << c << endl;
			}

			else cout << "NO" << endl;
		}		
		else cout << "NO" << endl;
	}
	return 0;
}

vector <int> primeFactors(int n)  
{   
	vector <int> v;
    while (n % 2 == 0)  
    {  
        v.push_back(2);  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            v.push_back(i);  
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        v.push_back(n);

    return v;  
} 