#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="0")
        {
            return 0;
        }

        int r=0;

        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                r += (int)s[i] -48;
            }
            else r -= (int)s[i] -48;
        }

        if(abs(r)%11==0) cout << s << " is a multiple of 11." << endl;
        else cout << s << " is not a multiple of 11." << endl;

    }
}
