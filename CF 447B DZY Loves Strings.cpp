#include <iostream>
using namespace std;
int main() {
	string str; 
	int k;
	cin>>str>>k;
	int w[27],b=0,t=0,len=str.length();
	for(int x=1; x<=26; x++){
		cin>>w[x]; 
		if(w[x]>b)b=w[x];
	}
	for(int x=0; x<len; x++){ 
		int i=(int)str[x]-96;
		t+=w[i]*(x+1); 
	}
	for(int x=0; x<k; x++)	
		t+=(++len)*b;
	cout<<t;
}