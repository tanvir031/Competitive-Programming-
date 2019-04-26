#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {

        int a,b;
    cin >> a >> b;
    if(a==0 && b==0) return 0;

    vector <int> v;
    set <int> s;
    for(int i=0;i<a+b;i++)
    {
        int t;
         cin >> t;
         v.push_back(t);
         s.insert(t);
    }

    cout << v.size() - s.size() << endl;
    }
}