#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m; 
	cin>>n>>m;
    int p[n+1]={0}, q[m+1]={0};
    for(int x=0; x<n+1; x++)
		cin>>p[x];
    for(int x=0; x<m+1; x++)
		cin>>q[x];
    if(n>m){
        if(p[0]>0 && q[0]>0)
			cout<<"Infinity";
        else if(p[0]<0 && q[0]<0)
			cout<<"Infinity";
        else if(p[0]<0 || q[0]<0)
			cout<<"-Infinity";
    }
    else if(n<m){
		cout<<"0/1";
	}
    else if(n==m){
        int gcd=__gcd(abs(p[0]), abs(q[0]));
        cout<<p[0]*(q[0]<0?-1:1)/gcd<<"/"<<abs(q[0]/gcd);
    }
}