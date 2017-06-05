#include <iostream>
#include <map>
using namespace std;
int main(){
    int a=0, b=0, cnt=8*8;
    char c;
    map<char,int>mp;
    mp['Q']=9, mp['R']=5, mp['B']=3,
    mp['N']=3, mp['P']=1, mp['K']=0;
    while(cnt--){
        cin>>c;
        if(c>='A' && c<='Z')
            a+=mp[c];
        else if(c>='a' && c<='z')
            b+=mp[toupper(c)];
    }
    if(a>b)cout<<"White";
    else if(a<b)cout<<"Black";
    else cout<<"Draw";
    return 0;
}