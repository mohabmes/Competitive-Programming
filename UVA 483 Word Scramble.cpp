#include <iostream>
#include <cstdio>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt","w", stdout);
    string s;
    int f=0;
    while(getline(cin,s)){
        f=0;
        istringstream iss(s);
        while(iss>>s){
            if(f)cout<<" ";
            reverse(s.begin(), s.end());
            cout<<s;
            f++;
        }
        cout<<endl;
    }
	return 0;
}
