#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a=0,b=0;
    string str, s1="one", s2="two";
    cin>>n;
    for(int x=0; x<n; x++){
        cin>>str;
        a=0,b=0;
        if(str.length()<=3){
            for(int y=0; y<str.length(); y++){
                a+=(str[y]==s1[y]);
                b+=(str[y]==s2[y]);
            }
        }
        if(a>b) cout<<"1\n";
        else if(a<b) cout<<"2\n";
        else cout<<"3\n";
    }
    return 0;
}
