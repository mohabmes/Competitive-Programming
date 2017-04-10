#include <iostream>
//#include <cstdio>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    string s;
    getline(cin, s);
    while(n--){
        getline(cin, s);
        int alpa[26]={0}, max=0, sz=s.length();
        for(int i=0; i<sz; i++){
            s[i]=tolower(s[i]);
            if(s[i]>='a' && s[i]<='z'){
                alpa[s[i]-'a']++;
                if(alpa[s[i]-'a']>max)max=alpa[s[i]-'a'];
            }
        }
        for(int i=0; i<26; i++)
            if(alpa[i]==max)cout<<(char)(i+97);
        cout<<endl;
    }
    return 0;
}
