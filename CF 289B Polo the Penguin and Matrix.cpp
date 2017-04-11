#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int n,m,d,mid=0,cnt=0;
	cin>>n>>m>>d;
	int a[n*m],l=n*m;
	for(int x=0; x<l; x++) 
		cin>>a[x];
	sort(a,a+l); 
	mid=round(l/2);
	mid=a[mid];
	for(int x=0; x<l; x++){
		if(a[x]%d!=a[0]%d){
			cout<<"-1"; return 0;
		}
		else 
			cnt+=abs(mid-a[x])/d;
	}
	cout<<cnt;
}