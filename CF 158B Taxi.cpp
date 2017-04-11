#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,t[4]={0},cnt=0,f;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>f;
        t[f-1]++;
    }
    t[0]-=min(t[0],t[2]);
    cnt=t[3]+t[2]+ceil((2*t[1]+t[0])/4.0);
    cout<<cnt;
}