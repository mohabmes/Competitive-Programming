#include <iostream>
using namespace std;
int main(){
	int n, x, r=1000,l=0;
	cin>>n>>x;
	while(n--){
	    int a,b; 
		cin>>a>>b;
	    r=min(r, max(a,b));
        l=max(l, min(a,b));
	}
    if(l>r) 
		cout<<"-1";
    else if(x<=r && x>=l)
		cout<<"0";
    else if(x>r)
		cout<<x-r;
    else 
		cout<<l-x;
}