#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,e,c1=0,c2=0; 
	cin>>n;
    int m[n],t=0;
    for(int i=0; i<n; i++){
		cin>>m[i]; 
		t+=m[i];
	}
    e=t/n;
    for(int i=0; i<n; i++){
		if(m[i]!=e)
			c1++;
		else 
			c2++;
	}
    if(c2==n)
		cout<<"Exemplary pages.";
    else if(c1!=2 || t%n>0)
		cout<<"Unrecoverable configuration.";
    else{
        c1=c2=0; t=m[0];
        for(int i=0; i<n; i++){
			if(m[i]!=e&&c1==0)
				c1=i;
			else if(m[i]!=e)
				c2=i;}
        t=abs(m[c1]-m[c2])/2;
		if(m[c1]>m[c2])
			swap(c1,c2);
        cout<<t<<" ml. from cup #"<<c1+1<<" to cup #"<<c2+1<<".";
    }
}