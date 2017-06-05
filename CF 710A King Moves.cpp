#include <iostream>
using namespace std;
int rI(int r){return r + 1;}
int rD(int r){return r - 1;}
char cI(char c){return c + (char(1));}
char cD(char c){return c - (char(1));}
int main(){
    int r, cnt=0;
    char c;
    cin>>c>>r;
    if(rI(r) <= 8 )cnt++;
    if(rD(r) >= 1 )cnt++;
    if(cI(c) <= 'h' )cnt++;
    if(cD(c) >= 'a' )cnt++;
    if(rI(r) <= 8 && cI(c) <= 'h')cnt++;
    if(rI(r) <= 8 && cD(c) >= 'a')cnt++;
    if(rD(r) >= 1 && cD(c) >= 'a')cnt++;
    if(rD(r) >= 1 && cI(c) <= 'h' )cnt++;
    cout<<cnt;
	return 0;
}