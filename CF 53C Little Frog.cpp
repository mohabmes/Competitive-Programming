#include <iostream>
using namespace std;
int main() {
	int n,a=0,b=0;
	cin>>n;
	for(int i=0; i<=n/2; i++){
        a=i+1;
		b=n-i;
        if(i<n/2)
			cout<<a<<" "<<b<<" ";
        else if(a==b || n%2==1)
			cout<<a;
	}
	return 0;
}