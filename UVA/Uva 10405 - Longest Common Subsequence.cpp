#include <bits/stdc++.h>
using namespace std;

int main()
{
		char s1[1000];
		char s2[1000];
		while(gets(s1)&&gets(s2))
		{
        int m = strlen(s1);
        int n = strlen(s2);
		int arr[m+1][n+1];

		for(int i=0;i<m+1;i++){
			for(int j=0;j<n+1;j++){
                if(i==0 || j==0) {
                    arr[i][j] = 0;
                }
				else if(s1[i-1]==s2[j-1]){
					arr[i][j] = arr[i-1][j-1] + 1;
				}
				else{
					arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
				}
			}
		}
		printf("%d\n",arr[m][n]);

    }
	return 0;
}
