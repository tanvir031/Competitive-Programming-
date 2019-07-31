#include <bits/stdc++.h>
using namespace std;

int main(int argc, char  *argv[]){

	
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	long long m,n;
	long long t=0;
	while(scanf("%lld %lld",&m,&n)){
	    t++;
        
        if(m==0 && n==0) return 0;
		long long arr[m+1][n+1];
		long long v1[m],v2[n];
		for (int i = 0; i < m; i++){
			cin >> v1[i];
		}
		for(int i=0;i<n;i++)
			cin >> v2[i];
        

		for(int i=0;i<m+1;i++){
			for(int j=0;j<n+1;j++){

				if(i==0 || j==0) arr[i][j] = 0;
				else if(v1[i-1]==v2[j-1]) arr[i][j] = arr[i-1][j-1] + 1;
				else 
					arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
			}
		}
		cout << "Twin Towers #" << t << endl;
		
		cout << "Number of Tiles : " << arr[m][n] << endl;
		//cout << endl;
	}
	return 0;
}