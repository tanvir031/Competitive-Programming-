#include <bits/stdc++.h>
using namespace std;

int GetNumberOfDigits (int i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}


int main(int argc, char  *argv[])
{



	string s;
	while(cin >> s){
	     
    int n = s.size();
    if(s=="END") return 0;
    else if(s=="1"){
        cout << 1 << endl;
        continue;
    }
    else if(n==1){
        cout << 2 << endl;
        continue;
    }
    
	int cnt = 0;

	for(int i=0;;i++){

		int x = GetNumberOfDigits(n);
		n = GetNumberOfDigits(n);
		cnt++;
		if(x==1) break;
	}

	cout << cnt+2 << endl;
	}
	return 0;
		
}