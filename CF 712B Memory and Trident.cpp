#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int UD=0, RL=0, sz=s.length();
    
    if(sz%2)
        return cout<<-1,0;
        
    for(int i=0; i<sz; i++){
        if(s[i]=='U')UD++;
        if(s[i]=='D')UD--;
        if(s[i]=='R')RL++;
        if(s[i]=='L')RL--;
    }
    cout<<(abs(UD)+abs(RL))/2;
    return 0;
}