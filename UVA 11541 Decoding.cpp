#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int n, tc=1;
    cin>>n;
    string s;
    getline(cin, s);
    while(n--){
        cout<<"Case "<<tc++<<": ";
        getline(cin, s);
        int sz=s.length(), cnt=0, f=0;
        char crt;
        crt=s[0];
        for(int i=1; i<sz; i++){
            if(s[i+1]>='0' && s[i+1]<='9')f=0;
            else f=1;

            if(s[i]>='A' && s[i]<='Z')
                crt=s[i], cnt=0;
            if(s[i]>='0' && s[i]<='9')
                cnt = cnt*10+(int)(s[i]-'0');
            if(f)
                for(int i=0; i<cnt; i++)
                    cout<<crt;
        }
        cout<<endl;
    }
    return 0;
}
