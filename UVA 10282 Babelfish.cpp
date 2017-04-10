#include <iostream>
#include <sstream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    map<string,string> mp;
	string x,y,z;

    while(getline(cin,x)){
        stringstream ss(x);
        if(x.empty())break;
        ss>>y>>z;
        mp[z]=y;
    }
    while(cin>>x){
		if(mp.count(x))cout<<mp[x]<<endl;
		else cout<<"eh"<<endl;
	}
	return 0;
}
