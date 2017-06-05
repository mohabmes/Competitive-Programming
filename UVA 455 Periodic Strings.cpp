#include <iostream>
//#include <cstdio>
using namespace std;
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt","w", stdout);
    int tc, f=1;
    string s;

    cin>>tc;
    while(tc--){
        cin>>s;
        for(int len=1; len<=s.size(); len++){
            f=1;
            for(int i=len; i<s.size(); i+=len){
                if(s.substr(0,len)!=s.substr(i,len)){
                    f=0; break;
                }
            }
            if(f){
                cout<<len<<endl;
                if(tc)cout<<endl;
                break;
            }
        }
    }
	return 0;
}
