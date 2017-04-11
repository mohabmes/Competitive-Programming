#include <iostream>
using namespace std;
int main(){
    int n; 
	cin>>n;
    int a[6]={0},b,c;
    for(int x=0; x<n; x++){
		cin>>b>>c; 
		a[b]++;
		a[c]++;
	}
    for(int x=1; x<6; x++)
		if(a[x]>=3||a[x]<=1){
			cout<<"WIN"; 
			return 0;
		}
    cout<<"FAIL";
}