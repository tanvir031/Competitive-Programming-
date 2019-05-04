#include <bits/stdc++.h>
using namespace std;

vector <int> solve1(int a)
{
    vector <int> v;
    while(1)
    {
        v.push_back(a%10);
        a = a/10;
        if(a==0) break;
    }
    return v;
}

set <int> solve2(int a)
{
    set <int> s;
    while(1)
    {
        s.insert(a%10);
        a = a/10;
        if(a==0) break;
    }
    return s;
}

int main()
{
    int a,b;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int r=0;

        for(int i=a;i<=b;i++)
        {
            vector <int> v = solve1(i);
            set <int> s = solve2(i);
            if(v.size()==s.size()) r++;
        }
        cout << r << endl;
    }
}
