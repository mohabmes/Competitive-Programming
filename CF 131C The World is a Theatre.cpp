#include <iostream>
#define ll long long
using namespace std;
ll _C(ll n, ll r){
    //if(r>n/2)r=n-r;
    ll ans=1;
    for(ll i=1; i<=r; i++)
        ans*=n-i+1, ans/=i;
    return ans;
}

int main(){
    //freopen("in.txt", "r", stdin);
    ll n,m,t,g, ans=0;
	cin>>n>>m>>t;
	for(ll b=4; b<t; b++){
        g=t-b;
        ans+=_C(n,b)*_C(m,g);
	}
	cout<<ans;
	return 0;
}