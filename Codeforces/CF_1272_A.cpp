#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c;
	int t;
	cin >> t;
	int arr[3];
	while(t--)
	{
		cin >> arr[0] >> arr[1] >> arr[2];
		
		sort(arr,arr+3);


		if(arr[1]==arr[0] && arr[1]==arr[2] && arr[2]==arr[0])
		{
			cout << 0 << endl;
			continue;
		}

		if(arr[1]==arr[0])
		{
			arr[1]++;
			arr[0]++;

			if(arr[1]!=arr[2])
			{
				arr[2]--;
			}
		}

		
		else if(arr[1]==arr[2])
		{
			arr[1]--;
			arr[2]--;

			if(arr[1]!=arr[0])
			{
				arr[0]++;
			}
		}

		else 
		{
			arr[0]++;
			arr[2]--;
		}
		





		cout << (long long)(abs(arr[1]-arr[2]) + abs(arr[1]-arr[0]) + abs(arr[0]-arr[2])) << endl;

		
		//cout << x+y+z << endl;
	}
	return 0;
}