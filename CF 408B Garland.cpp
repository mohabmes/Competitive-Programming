#include <iostream>
using namespace std;
int main() {
	string n,m;
	cin>>n>>m;
	int na[26]={0}, ma[26]={0}, cnt=0;
	for(int x=0; x<n.length(); x++)
		na[n[x]-'a']++;
	for(int x=0; x<m.length(); x++)
		ma[m[x]-'a']++;
	for(int x=0; x<26; x++){
		if(na[x]<ma[x] && na[x]==0){
			cout<<"-1"; return 0;
		}
		else if(na[x]>=ma[x])
			cnt+=ma[x];
		else if(na[x]<ma[x])
			cnt+=na[x];
	}
	cout<<cnt;
}