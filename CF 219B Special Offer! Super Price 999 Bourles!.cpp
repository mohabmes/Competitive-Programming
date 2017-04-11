#include <iostream>
#define ll long long
using namespace std;
int main(){
    ll p,d; 
	cin>>p>>d;
    ll n=++p;
    for(ll k=10;;k*=10){
        if(p%k>d)
			break;
        n=p-(p%k);
    }
	cout<<n-1;
}