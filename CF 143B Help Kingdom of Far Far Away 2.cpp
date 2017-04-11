#include <iostream>
using namespace std;
string print(string s1, string s2){
    string form="$";
    if(s2.length()<2)
		s2+='0';
    int len=s1.length();
    for(int x=0; x<s1.length(); x++){
        int pos=(len-(x+1));
        form+=s1[x];
        if(pos%3==0 && pos)
			form+=',';
    }
	return form+"."+s2;
}
int main()
{
    string n;
    cin>>n;
    string frac, intg;
    int x, pos=0;
    for(x=0; x<n.length(); x++)
		if(n[x]=='.')
			break;
    intg=n.substr(pos,x); 
	if(n[0]=='-')
		intg=intg.substr(1);
    if(x<n.length())
		frac=n.substr(x+1,2); 
	else 
		frac="00";
    if(n[0]=='-'){
        cout<<'('<<print(intg,frac)<<')';
    }
	else{
		cout<<print(intg,frac);
	}
}