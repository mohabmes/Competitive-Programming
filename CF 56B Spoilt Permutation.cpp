#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, l=-1, r=-1;
    cin>>n;
    int a[n]; 
	for(int x=0;x<n; x++)
		cin>>a[x];
    for(int x=0;x<n; x++){ 
		if(a[x]!= x+1 && l<=-1)
			l=x; 
		else if(a[x]!= x+1)
			r=x; 
	}
    reverse(a+l,a+r+1);
    for(int x=0;x<n; x++)
		if(a[x]!=x+1)
			return cout<<"0 0",0;
    cout<<l+1<<" "<<r+1;
}