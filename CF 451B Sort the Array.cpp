#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n]={0},b[n]={0};
	for(int i=0; i<n; i++){cin>>a[i]; b[i]=a[i];}
	sort(b,b+n);
	int s=-1,e=-1,key=1;
	for(int i=0; i<n; i++){
		if(a[i]!=b[i] && s==-1)s=i;
		if(a[i]!=b[i])e=i;
	}
	reverse(a+s,a+e+1);
	for(int i=0; i<n; i++)if(a[i]!=b[i]){key=0; break;}
	if(key){
		cout<<"yes"<<endl;
		if(s==-1 && e==-1)cout<<"1 1";
		else cout<<s+1<<" "<<e+1;
	}
	else cout<<"no";
}