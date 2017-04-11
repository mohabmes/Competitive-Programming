#include <iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int a[n]={0}, b[m]={0},i=0;
	for(int x=0; x<n; x++) 
		cin>>a[x];
	for(int x=0; x<m; x++) 
		cin>>b[x];
	for(int y=0; y<m && i<n; y++) 
		if(b[y]>=a[i])i++;
	cout<<n-i;
}