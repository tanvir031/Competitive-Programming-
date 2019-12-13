    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	string s;
    	cin >> s;
     
    	string r = "";
    	string r2 = "";
     
    	bool start = 0;
    	bool end = 0;
    	bool is_A = 0;
    	bool start_A = 0;

    	bool is_it_all_A=1;
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]!='a')
    		{
    			is_it_all_A = 0;
    		}
    	}
    	if(is_it_all_A)
    	{
    		s[s.size()-1] = 'z';
    		cout << s << endl;
    		return 0;
    	}
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]!='a' && is_A==0)
    		{
    			s[i]--;
    		}
     
    		if(s[i]!='a' && start==1 && end==0)
    		{
    			s[i]--;
    		}
     
    		if(s[i]=='a' && start==1 && end ==0)
    		{
    			end = 1;
    			break;
    		}
     
    		if(s[i]=='a')
    		{
    			is_A = 1;
     
    			if(i==0)
    			{
    				start_A = 1;
    				start = 1;
    			}
    		}
    	}
    	cout << s << endl;
    	return 0;
    }