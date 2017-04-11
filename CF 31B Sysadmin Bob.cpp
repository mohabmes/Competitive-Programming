#include <iostream>
using namespace std;
int main(){
    string s;   cin>>s;
    int i=0,p=-2;
    for(int x=0; x<s.length(); x++){
        if(s[x]>='a' && s[x]<='z')
			continue;
        else if(s[x]=='@'&&x&&x!=s.length()-1&&x-p>=3){
            i++;
            if(s[x-1]!='@' && s[x+1]!='@')
				p=x;
            else 
				return cout<<"No solution",0;
        }
        else 
			return cout<<"No solution",0;
    }
    if(!i)
		return cout<<"No solution",0;
    for(int x=0; x<s.length(); x++){
        cout<<s[x];
        if(s[x]=='@'&&i>0){
            cout<<s[x+1];
            if(--i)cout<<',';
            x++;
        }
    }
}