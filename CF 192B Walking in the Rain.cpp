#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], d[n+2]={0};
    for(int x=1; x<=n; x++){
		cin>>a[x]; 
		d[x]=a[x];
	}
    for(int x=2; x<=n; x++){
        d[x]=(d[x-1]>d[x-2]?d[x-1]:d[x-2]);
        d[x]=(a[x]<d[x]?a[x]:d[x]);
    }
	cout<<d[n]<<endl;
}