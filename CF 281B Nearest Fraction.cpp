#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,n; 
	cin>>x>>y>>n;
    int a,b;
    double d=100000;
    for(int cb=1; cb<=n; cb++){
        int ca=ceil((double)cb*x/y -0.5);
        double cd=fabs((double)x/y - (double)ca/cb);
        if(cd<d){
			d=cd; 
			a=ca; 
			b=cb;
		}
    }
	cout<<a<<"/"<<b;
}