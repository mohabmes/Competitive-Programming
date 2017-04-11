#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,vb, vs;
	cin>>n>>vb>>vs;
    int a[n]={0};
	for(int x=0; x<n; x++)
		cin>>a[x];
    double ux, uy; 
	cin>>ux>>uy;
    double _min=1000000; 
	int i;
    for(int x=1; x<n; x++){
        double t= a[x]/(double)vb + (sqrt((a[x]-ux)*(a[x]-ux)+(uy*uy))/(double)vs);
        if(t<=_min){
			_min=t; 
			i=x;
		}
    }
	cout<<i+1<<endl;
}