#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	string s,t;
	getline(cin,s);
	getline(cin,t);
	int a[200]={0},i;
	for(i=0;i<s.length();i++){
		a[s[i]]++;
	}
	for(i=0;i<t.length();i++){
		if(t[i]==' ')
			continue;
		a[t[i]]--;
		if(a[t[i]]<0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}