#include <cstdio>
#include <iostream>
using namespace std;
string filter(string in){
    string out;
    for(int i=0; i<in.length(); i++){
        if((in[i]>='a'&&in[i]<='z')||(in[i]>='A'&&in[i]<='Z'))
            out+=in[i];
        else out+=' ';
    }return out;
}
int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    string str;
    while (getline(cin, str)){
        int cnt=0;
        string t=filter(str);
        for(int i=0; i<str.length(); i++){
            if(t[i-1]!=' '&&t[i]==' '&&i)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
