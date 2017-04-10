#include <iostream>
//#include <cstdio>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string s,t;
    while(cin>>s>>t){
        int cnt=0, s_sz=s.length(), t_sz=t.length();
        for(int i=0; i<t_sz; i++){
            if(t[i]==s[cnt])cnt++;
            if(cnt==s_sz)break;
        }
        if(cnt==s_sz)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
