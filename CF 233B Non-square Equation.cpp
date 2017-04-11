#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
ll s(ll x){
    ll sum=0;
    while(x>0){
        sum+=(x%10);
		x/=10;
    }
	return sum;
}
int main(){
    ll n;
    cin>>n;
    ll ns=sqrt(n);
    for(ll x=(ns-100>1?ns-100:1); x<=ns; x++){
        if(x*x+s(x)*x==n){
			cout<<x; 
			return 0;
		}
    }
	cout<<"-1";
}