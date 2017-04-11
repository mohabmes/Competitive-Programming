#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    ll h=0,m=0,sz;
	string s;
	cin>>s;
	sz=s.length();
	for(int i=0; i<=sz-5; i++){
        string sub = s.substr(i, 5);
        if(sub == "heavy")
			h++;
        else if(sub == "metal") 
			m=m+h;
	}
	cout<<m;
	return 0;
}