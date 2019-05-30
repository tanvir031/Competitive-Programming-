#include <bits/stdc++.h>
using namespace std;

long long reverse(long long n)
{
    vector <int> v;

    while(1)
    {
        v.push_back(n%10);
        n /= 10;
        if(n==0) break;
    }

    reverse(v.begin(),v.end());

    long long ans=0;

    for(int i=0;i<v.size();i++)
    {
        ans += v[i]*pow(10,i);
    }
    return ans;
}


int main()
{
    bool prime[1000000];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=1000000; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=1000000; i += p)
                prime[i] = false;
        }
        
    }
    long long n;

    while(cin >> n)
    {
        
        if(prime[n] && prime[reverse(n)] && n!=reverse(n)) cout << n << " is emirp." << endl;
        else if(prime[n]) cout << n << " is prime." << endl;
        else cout << n << " is not prime." << endl;
    }

}
