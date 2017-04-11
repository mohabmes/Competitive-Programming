#include <iostream>
#include <cmath>
using namespace std;
void p(int,int,int[]);
int main(){
    int n;
    cin>>n;
    int a[n]; 
	for(int x=0; x<=n; x++)
		a[x]=x;
    for(int x= 0;  x<=n; x++)
		p(n, x, a);
    for(int x=n-1; x>=0; x--)
		p(n, x, a);
}
void p(int n, int b, int a[]){
    for(int i=abs(n-b); i>0; i--)
		cout<<"  ";
    for(int y=0; y<=b; y++){
		cout<<a[y]; if(y<b)cout<<" ";
	}
    if(b)
		cout<<" ";
    for(int y=b-1; y>=0; y--){
		cout<<a[y]; if(y>0)cout<<" ";
	}
    cout<<endl;
}