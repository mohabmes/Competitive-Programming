#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int x1,y1,r1,x2,y2,r2;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    int rr=abs(r1-r2);
    double d=sqrt(pow((x1-x2),2)+pow((y1-y2),2)), res=0;
    if(d<rr)
		res=rr-d;
    else if(d>r2+r1)
		res=d-r1-r2;
    cout<<fixed<<setprecision(9)<<res/2.0;
}