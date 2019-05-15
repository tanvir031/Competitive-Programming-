#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    cin.ignore();
    while(x--)
    {
    string s;
    getline(cin,s);

    stack <char> stk;
    bool flag = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stk.push(s[i]);
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(stk.empty())
            {
                flag = 1;
                break;
            }
            if(stk.top()=='(' && s[i]==')')
            {

                stk.pop();
            }

            else if(stk.top()=='{' && s[i]=='}')
            {

                stk.pop();
            }
            
            else if(stk.top()=='[' && s[i]==']')
            {
                stk.pop();
            }
        }
    }

    if(stk.empty() && !flag)
        cout << "Yes" << endl;
    else cout << "No" << endl;
    }
}
