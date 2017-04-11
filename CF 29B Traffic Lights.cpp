#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int l,d,v,g,r;
    cin>>l>>d>>v>>g>>r;
    float s=(float)d/v, res=(float)l/v;
    while(s>=(g+r))
		s-=(g+r);
    if(s>=g)
		res+=(g+r)-s;
    printf("%.9lf",res);
}