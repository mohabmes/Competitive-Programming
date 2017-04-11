#include <iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    int x,y,z;   x=y=z=0;
    for(int i=0; i<n; i++)
		cin>>a, x+=a;
    for(int i=0; i<n-1; i++)
		cin>>a, y+=a;
    for(int i=0; i<n-2; i++)
		cin>>a, z+=a;
    cout<<x-y<<endl<<y-z;
}