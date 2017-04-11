#include <iostream>
using namespace std;
string Trim(string s){
    string sub;
    for(int x=0; x<s.length(); x++){
        if(s[x]>='A'&&s[x]<='Z')
			sub+=(char)((int)s[x]+32);
        else if(s[x]>='a'&&s[x]<='z'){
			sub+=s[x];
		}
    }
	return sub;
}
int main(){
    string s[3],t;
    for(int x=0; x<3; x++){
		cin>>s[x]; 
		s[x]=Trim(s[x]);
	}
    int n; 
	cin>>n;
    string c[6]={ s[0]+s[1]+s[2], s[0]+s[2]+s[1], s[1]+s[2]+s[0],
                  s[1]+s[0]+s[2], s[2]+s[1]+s[0], s[2]+s[0]+s[1]  };
    for(int x=0, i=0; x<n; x++){
        cin>>t;
        t=Trim(t);
        for(int y=0; y<6; y++){
            if(t==c[y])
				i=1;
        }
        if(i)
			cout<<"ACC"<<endl;
        else 
			cout<<"WA"<<endl;
        i=0;
    }
}