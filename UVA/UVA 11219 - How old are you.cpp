#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    scanf("%d",&tc);

    for(int i=0;i<tc;i++)
    {


    int d1,m1,y1;
    int d2,m2,y2;

    scanf("%d/%d/%d\n",&d1,&m1,&y1);
    scanf("%d/%d/%d",&d2,&m2,&y2);

    int age;

    age = y1-y2;

    if(m2>m1)
    {
        age--;
    }

    else if(d2>d1 && m2==m1)
    {
        age--;
    }

  cout << "Case #" << i+1 << ": ";

    if(age>130) cout << "Check birth date" << endl;
    else if(age<0) cout << "Invalid birth date" << endl;
    else cout << age << endl;

    }
    return 0;


}
