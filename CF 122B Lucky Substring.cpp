#include <iostream>
using namespace std;
int main() {
	string str;
	cin>>str;
	int cnt7=0, cnt4=0;
	for(int x=0; x<str.length(); x++){
		if(str[x]=='7') cnt7++; 
		else if(str[x]=='4') cnt4++;
	}
	if(cnt7>cnt4) 
		cout<<"7";
	else if(cnt7<cnt4 &&cnt4) 
		cout<<"4"; 
	else if(cnt7==cnt4 &&cnt4) 
		cout<<"4";
	else 
		cout<<"-1";
}