#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
	ll n,m,t;
	cin>>n;
	ll v[++n]={0}, u[n]={0}, type, l, r;
	for(ll i=1; i<n; i++){
        cin>>t;
        v[i]=v[i-1]+t;
        u[i]=t;
	}
	sort(u,u+n);
	for(ll i=1; i<n; i++)
		u[i]+=u[i-1];
	cin>>m;
	while(m--){
        cin>>type>>l>>r;
        if(type==1)
			cout<<v[r]-v[l-1]<<endl;
        if(type==2)
			cout<<u[r]-u[l-1]<<endl;
	}
}