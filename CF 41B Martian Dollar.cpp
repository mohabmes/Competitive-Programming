#include <iostream>
using namespace std;
int main(){
    int n, b;   
	cin>>n>>b;
    int a[n], maxx=b;
    for(int x=0; x<n; x++)
		cin>>a[x];
    for(int x=0; x<n; x++){
        for(int y=x+1; y<n; y++)
			maxx = max(maxx, (b/a[x])*a[y]+(b%a[x]));
    }
	cout<<maxx;
}