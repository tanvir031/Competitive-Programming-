    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int a,b,c;
    	cin >> a >> b >> c;
     
    	vector <int> v(3);
    	v[0] = a;
    	v[1] = b;
    	v[2] = c;
    	sort(v.begin(),v.end());
    	a = v[0];
    	b = v[1];
    	c = v[2];
     
    	//cout << a << " " << b << c << endl;
    	if((a+b)>c){
    		cout << 0 << endl;
    	}
    	else{
    		cout << c-(a+b) + 1 << endl;
    	}
     
    	return 0;
    }