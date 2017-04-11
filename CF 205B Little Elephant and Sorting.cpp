#include <iostream>
using namespace std;
int main(){
    long long n, ans=0;
    cin>>n;
    int a[n];
    for(int x=0; x<n; x++)
		cin>>a[x];
    for(int x=0; x<n-1; x++){
        if(a[x]>a[x+1])
			ans+=a[x]-a[x+1];
    }
	cout<<ans;
}