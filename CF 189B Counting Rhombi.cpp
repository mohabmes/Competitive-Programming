#include <iostream>
#define ll long long
using namespace std;
int main(){
	ll w, h, c=0;
	cin>>w>>h;
    for (ll x=2; x<=w; x+=2)
    for (ll y=2; y<=h; y+=2)
        c+= (w-x+1)*(h-y+1);
	cout<<c<<endl;
}