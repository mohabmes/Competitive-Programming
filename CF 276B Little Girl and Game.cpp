#include <iostream>
using namespace std;
int main() {
	string str;
	cin>>str;
	int k=0, len=str.length(), a[26]={0};
	for(int x=0; x<len; x++)
		a[str[x]-'a']++;
	for(int x=0; x<26; x++)
		if(a[x]%2==1)
			k++;
	if(!k||k%2==1)
		cout<<"First"; 
	else if(k%2==0) 
		cout<<"Second";
}