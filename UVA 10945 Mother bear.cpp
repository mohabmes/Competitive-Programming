#include <iostream>
#include <string>
using namespace std;
string filter(string in){
    string out;
    for(int x=0; x<in.length(); x++){
        if(in[x]=='.'|| in[x]==','||in[x]=='!'||in[x]=='?'||in[x]==' ')
            continue;
        out+=tolower(in[x]);
    }return out;
}
string strReverse(string in){
    string out;
    for(int x=in.length()-1; x>=0; x--){
        out+=in[x];
    }return out;
}
bool IsPalindrome(string in){
    int len=in.length();
    int i=0; if(len%2)i=1;
    string fh=in.substr(0,len/2);
    string sh=in.substr((len/2)+i);
    string Rev=strReverse(sh);
    if(fh==Rev)return 1;
    return 0;
}
int main(){
    string str;
    while (getline(cin, str) && str != "DONE"){
        str=filter(str);
        if(IsPalindrome(str))
            cout << "You won't be eaten!\n";
        else
            cout << "Uh oh..\n";
    }
    return 0;
}