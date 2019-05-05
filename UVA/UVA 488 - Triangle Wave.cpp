#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
while(k--)
{
    int n,m;
    scanf("%d\n",&n);
    scanf("%d",&m);

    for(int i1=0;i1<m;i1++)
    {
        //waveform
        for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << i;
        }
        cout << endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout << i;
        }
        cout << endl;
    }

    //waveform
    if(i1!=m-1) cout << endl;
    }

    if(k!=0) cout << endl;
}
    return 0;
}
