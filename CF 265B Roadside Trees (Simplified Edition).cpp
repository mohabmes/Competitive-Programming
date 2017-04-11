#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],cnt=1;
	for(int x=0; x<n; x++)
		cin>>a[x];
	cnt+=a[0];
	for(int x=0; x<n-1; x++){
		if(a[x]==a[x+1])
			cnt+=2;
		else 
			cnt+=abs(a[x]-a[x+1])+2;
	}
	cout<<cnt;
}