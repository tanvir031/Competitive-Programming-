#include <bits/stdc++.h>
using namespace std;


int main(int argc, char  *argv[])
{
	
	
		int t;
	    scanf("%d\n\n",&t);
	    
	    for(int i=0;i<t;i++){
	    map <string,int> m;
	    map <string,int>::iterator it;

	    string s;
	    double n=0;
	    bool cnt=1;
	    while(getline(cin,s)){
            if(s.empty()){
                break;
            }
            m[s]++;
            n++;
	    }

	    for(it=m.begin();it!=m.end();it++){
            cout << it->first << " " << fixed << setprecision(4) << (double)it->second/n*100.00 << endl;
	    }
	    if(i!=t-1) cout << endl;
	    }

	return 0;
}