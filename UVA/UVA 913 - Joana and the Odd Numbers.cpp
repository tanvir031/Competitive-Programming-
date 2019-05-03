#include <bits/stdc++.h>
using namespace std;

long long solve(long long  a)
{
    if(a<=0) return 0;
    return 1+(a-1)*2;
}

int main()
{
    long long  a;

    while(scanf("%llu",&a)!=EOF)
 {

    long long  n = (a-1)/2 + 1;

    long long  sum = n*n;

    long long  k = solve(sum)+solve(sum-1)+solve(sum-2);
    cout << k << endl;
 }

}
