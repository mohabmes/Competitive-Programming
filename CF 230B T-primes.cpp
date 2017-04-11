#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int isPrime(ll x){
	ll sq=(sqrt(x));
	ll c=1;
	for(int i=2; i<=sq; i+=c){
		if(x%i==0)return 0;
		if(i==3)c=2;
	}
	return 1;
}
int main() {
	int n;
	cin>>n;
	string a[n];
	ll t=0;
	for(int x=0; x<n; x++){
		cin>>t;
		ll sqr=sqrt(t);
		if((sqr*sqr==t) && (t>1) && isPrime(sqr)) a[x]="YES";
		else a[x]="NO";
	}
	for(int x=0;x<n;x++)cout<<a[x]<<endl;
}