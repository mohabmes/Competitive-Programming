#include <iostream>
using namespace std;
/*
    V   a   W
    b   X   c
    Y   d   Z
*/
int main(){
    int n,a,b,c,d,W,Y,Z;
    long long cnt=0;
	cin>>n>>a>>b>>c>>d;
	for(int V=1; V<=n; V++){
        W=V+b-c;
        Y=V+a-d;
        Z=Y+b-c;
        if( (Y>0 && W>0 && Z>0) && (Y<=n && W<=n && Z<=n) ) 
			cnt++;
	}cout<<cnt*n;
	return 0;
}