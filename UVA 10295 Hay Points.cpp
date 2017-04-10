#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    int n,m,t,cnt=0;
    map<string,int> mp;
    string s;

    cin>>n>>m;
    while(n--){
        cin>>s>>t;
        mp.insert(make_pair(s,t));
    }
    while(m--){
        cnt=0;
        while(cin>>s){
            if(s==".")break;
            if(mp.count(s)){
                cnt+=mp[s];
            }
        }
        cout<<cnt<<endl;
    }
	return 0;
}
