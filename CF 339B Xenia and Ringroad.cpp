#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int a[m],i=1; 
	long long t=0;
	for(int x=0; x<m; x++){
		cin>>a[x];
		if(a[x]>i)
			t+=a[x]-i;
		if(a[x]<i)
			t+=n-abs(a[x]-i);
		i=a[x];
	}
	cout<<t;
}