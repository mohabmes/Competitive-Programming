#include <iostream>
using namespace std;
int main() {
	int n,q,x,y;
	cin>>n;
	int sum[++n]={0};
	for(int i=1; i<n; i++){
        cin>>x;
        sum[i]=x+sum[i-1];
	}
	cin>>q;
	for(int i=0; i<q; i++){
        cin>>x>>y;
        cout<<sum[y+1]-sum[x]<<endl;
	}
}