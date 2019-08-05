#include <bits/stdc++.h>
using namespace std;

string GetNumberOfDigits (string s)
{
    int k=0;
    for(int i=0;i<s.size();i++){
        k += (int)s[i] - 48;
    }
    string out_string;
    stringstream ss;
    ss << k;
    out_string = ss.str();
    return out_string;
}


int main(int argc, char  *argv[])
{
    string s1,s2;
    map <char,int> m;
    for(int i=97;i<=122;i++){
        m[i] = i-96;
    }
    while(getline(cin,s1) && getline(cin,s2)){
        string ss1="";
        string ss2="";
        for(int i=0;i<s1.size();i++){
            if((s1[i]>=97 && s1[i]<=122)||(s1[i] <=90 && s1[i]>=65)){
                ss1 += tolower(s1[i]);
            }
        }
        for(int i=0;i<s2.size();i++){
            if((s2[i]>=97 && s2[i]<=122)||(s2[i] <=90 && s2[i]>=65)){
                ss2 += tolower(s2[i]);
            }
        }
        
        int l1=0,l2=0;
        for(int i=0;i<ss1.size();i++){
            l1 += m[ss1[i]];
        }
        
        for(int i=0;i<ss2.size();i++){
            l2 += m[ss2[i]];
        }
        
        ss1 = to_string(l1);
        ss2 = to_string(l2);
        
        int n1,n2;
        while(1){
            if(GetNumberOfDigits(ss1).size()==1){
                n1 = stoi(GetNumberOfDigits(ss1));
                break;
            }

            ss1 = GetNumberOfDigits(ss1);
        }
        
        while(1){
            if(GetNumberOfDigits(ss2).size()==1){
                n2 = stoi(GetNumberOfDigits(ss2));
                break;
            }

            ss2 = GetNumberOfDigits(ss2);
        }

        
        cout << fixed << setprecision(2) <<  (double)min(n1,n2)/max(n1,n2)*100 << " %" <<  endl;
        
    }
    
	
	return 0;
		
}