#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y >> z;

	if(x-y==0 && z==0){
			cout << 0 << endl;
			return 0;
		}
	
	else if(x-y<0)
	{
		if((x-y+z)<0){
			cout << "-" << endl;
			return 0;
		}
		else if((x-y+z)>=0){
			cout << "?" << endl;
			return 0;
		}
		
	}

	else if(x-y>0)
	{
		if((x-y-z)>0){
			cout << "+" << endl;
			return 0;
		}
		else if((x-y-z)<=0){
			cout << "?" << endl;
			return 0;
		}
	}
	else{
		cout << "?" << endl;
		return 0;
	}	


	return 0;
}